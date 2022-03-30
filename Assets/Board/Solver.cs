using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BoardInternal;

namespace SolverInternal {
    public static class Solver {
        public static int[][] FastSolve(Board _board) {
            int[][] ans = _board.board;

            Dictionary<string, int> encountered = new Dictionary<string, int>();
            int rowIdx = 0;
            bool goBack = false;
            bool rowBack = false;

            while (rowIdx < ans.Length) {
                int[] cRow = ans[rowIdx];
                    
                int colIdx = rowBack ? cRow.Length - 1 : 0;
                while (colIdx < cRow.Length) {
                    if (colIdx < 0) {
                        break;
                    }

                    if (_board.unchangedBoard[rowIdx][colIdx] != 0) {
                        colIdx += goBack ? -1 : 1;
                        continue;
                    }

                    int[] pos = { colIdx, rowIdx };
                    string posKey = colIdx.ToString() + rowIdx.ToString();

                    if (!encountered.ContainsKey(posKey)) {
                        encountered.Add(posKey, 0);
                    }

                    int guess = encountered[posKey] + 1;
                    while (guess <= 9) {
                        Move move = new Move(pos, guess);
                        bool madeMove = _board.MakeMove(move);

                        if (madeMove) {
                            break;
                        }

                        guess += 1;
                    }

                    if (guess > 9) {
                        encountered[posKey] = 0;
                        ans[rowIdx][colIdx] = 0;
                        colIdx -= 1;
                        goBack = true;
                    } else {
                        encountered[posKey] = guess;
                        colIdx += 1;
                        goBack = false;
                    }
                }

                if (colIdx < 0) {
                    rowIdx -= 1;
                    rowBack = true;
                } else {
                    rowIdx += 1;
                    rowBack = false;
                }
            }

            return ans;
        }
    }
}
