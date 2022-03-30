using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace BoardInternal {
    public struct Move {
        public int[] pos { get; }
        public int val { get; }
        public Move(int[] _pos, int _val) {
            pos = _pos;
            val = _val;
        }
    }

    public class Board {
        public int[][] unchangedBoard;
        public int[][] board;

        public Board(string boardStr = null) {
            if (boardStr != null) {
                board = ParseBoardString(boardStr);
                unchangedBoard = ParseBoardString(boardStr);
            } else {
                board = ConstructEmptyBoard();
                unchangedBoard = ConstructEmptyBoard();
            }
        }

        public string PrintBoard() {
            string output = "";
            for (int row = 0; row < 9; row++) {
                string curr = "";
                for (int column = 0; column < 9; column++) {
                    curr += board[row][column].ToString();
                    curr += " ";

                    if ((column + 1) % 3 == 0 && column < 8) {
                        curr += "| ";
                    }
                }

                output += curr + "\n";

                if ((row + 1) % 3 == 0 && row < 8) {
                    output += "\n";
                }
            }

            return output;
        }

        public bool MakeMove(Move move) {
            int col = move.pos[0];
            int row = move.pos[1];
            int temp = board[row][col];

            if (unchangedBoard[row][col] != 0) {
                return false;
            }

            board[row][col] = move.val;

            if (!IsValidMove(move.pos)) {
                board[row][col] = temp;
                return false;
            }

            return true;
        }

        private int[][] ConstructEmptyBoard() {
            int[][] output = new int[9][];

            for (int i = 0; i < 9; i++) {
                output[i] = new int[9];
            }

            return output;
        }
        
        private int[][] ParseBoardString(string boardStr) {
            int[][] output = ConstructEmptyBoard();
            int row = 0;
            int col = 0;
            for (int i = 0; i < boardStr.Length; i++) {
                if (col >= 9) {
                    col = 0;
                    row += 1;
                }

                int curr = 0;
                if (char.IsDigit(boardStr[i])) {
                    curr = (int)char.GetNumericValue(boardStr[i]);
                }
                

                try {
                    output[row][col] = curr;
                } catch {
                    
                }

                col += 1;
            }
            return output;
        }

        public bool IsValidMove(int[] movePos) {
            int colIdx = movePos[0];
            int rowIdx = movePos[1];
            int[] squarePos = PosToSquareIdx(movePos);

            int[] columnArr = GetColumnArr(colIdx);
            int[] rowArr = board[rowIdx];
            int[] squareArr = GetSquareArr(squarePos);

            bool validCol = IsValidArr(columnArr);
            bool validRow = IsValidArr(rowArr);
            
            bool validSquare = IsValidArr(squareArr);

            return (validCol && validRow && validSquare);
        }

        public static int[] PosToSquareIdx(int[] pos) {
            int squareSize = 3;

            int col = pos[0]; // x
            int row = pos[1]; // y

            return new int[] {
                col / squareSize,
                row / squareSize
            };
        }

        public int[] GetColumnArr(int colIdx) {
            int[][] nums = board;
            int[] output = new int[nums.Length];

            for (int i = 0; i < nums.Length; i++) {
                output[i] = nums[i][colIdx];
            }

            return output;
        }

        public int[] GetSquareArr(int[] squarePos) {
            int[][] nums = board;
            int[] output = new int[nums.Length];
            int squareSize = 3;

            int col = squarePos[0] * squareSize;
            int row = squarePos[1] * squareSize;
            int currIdx = 0;
            for (int i = 0; i < squareSize; i++) {

                for (int b = 0; b < squareSize; b++) {
                    output[currIdx] = nums[row][col];
                    col += 1;
                    currIdx += 1;
                }

                col -= (squareSize);
                row += 1;
            }

            return output;
        }

        public static bool IsValidArr(int[] arr) {
            int[] nums = new int[arr.Length + 1];

            for (int i = 0; i < arr.Length; i++) {
                int curr = arr[i];

                if (curr <= 0) {
                    continue;
                }
                else if (nums[curr] > 0) {
                    return false;
                }

                nums[curr] += 1;
            }

            return true;
        }
    }
}
