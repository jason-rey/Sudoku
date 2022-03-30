using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BoardInternal;
using SolverInternal;
using TMPro;
using UnityEngine.UI;

public class GameBoardInternal : MonoBehaviour
{
    public Board playerBoard { get; private set; }
    private int lives = 5;


    private Board solvedBoard;
    private GameObject selected = null;
    private Color temp;
    private Color highlighted = new Color(128, 128, 128, 125);
    bool wrongCooldown = false;
    void Awake() {
        string boardStr = GameObject.Find("Input").GetComponentInChildren<TextMeshProUGUI>().text.Trim();
        solvedBoard = new Board(boardStr);

        Solver.FastSolve(solvedBoard);
        playerBoard = new Board(boardStr);
    }

    void Update() {
        if (wrongCooldown) {
            return;
        }

        if (Input.GetKeyDown(KeyCode.Mouse0)) {
            if (selected != null) {
                ResetSelectedSquare();
            }
        }
        else if (Input.anyKeyDown && selected != null) {
            string input = Input.inputString;
            if (input.Length > 0 && char.IsDigit(input[0])) {
                int[] cellPos = selected.GetComponent<CellPos>().pos;

                int expected = solvedBoard.board[cellPos[1]][cellPos[0]];
                int inNum = (int)char.GetNumericValue(input[0]);

                if (inNum != expected) {
                    lives -= 1;
                    StartCoroutine(WrongGuess());
                } else {
                    selected.GetComponentInChildren<TextMeshProUGUI>().text = input[0].ToString();
                    ResetSelectedSquare();
                }
            } else {
                ResetSelectedSquare();
            }
        }
    }

    public void SetSelectedSquare(GameObject btn) {
        if (wrongCooldown) {
            return;
        }

        selected = btn;
        // make this do the button normal color instead
        Image col = selected.GetComponent<Image>();
        temp = col.color;
        col.color = highlighted;
    }

    void ResetSelectedSquare() {
        selected.GetComponent<Image>().color = temp;
        selected = null;
    }

    IEnumerator WrongGuess() {
        wrongCooldown = true;
        Image col = selected.GetComponent<Image>();
        Button btn = selected.GetComponent<Button>();
        ColorBlock colorVar = btn.colors;

        Color tempHigh = colorVar.highlightedColor;

        colorVar.highlightedColor = Color.red;
        btn.colors = colorVar;
        col.color = Color.red;

        yield return new WaitForSeconds(0.35f);

        wrongCooldown = false;
        colorVar.highlightedColor = tempHigh;
        btn.colors = colorVar;
        ResetSelectedSquare();
    }

}
