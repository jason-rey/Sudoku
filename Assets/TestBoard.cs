using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BoardInternal;
using SolverInternal;

public class TestBoard : MonoBehaviour
{
    private Board testBoard;
    // Start is called before the first frame update

    void PrintArray(int[] arr) {
        string output = "";

        for (int i = 0; i < arr.Length; i++) {
            output += arr[i].ToString() + " ";
        }

        Debug.Log(output);
    }

    void Start()
    {
        testBoard = new Board("010020300004005060070000008006900070000100002030048000500006040000800106008000000");

        Debug.Log(testBoard.PrintBoard());
        Solver.FastSolve(testBoard);
        Debug.Log(testBoard.PrintBoard());

    }

    public static string PrintBoard(int[][] board) {
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

    // Update is called once per frame
    void Update()
    {
        
    }
}
