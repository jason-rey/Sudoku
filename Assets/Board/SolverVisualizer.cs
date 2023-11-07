using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using BoardInternal;

public class SolverVisualizer : MonoBehaviour
{
    [SerializeField] private GameObject boardObj;
    [SerializeField] private BoardUI boardUI;
    [SerializeField] private Color originalColor;
    private Button startButton;
    private Board playerBoard;
    private Button currentCell;
    // Start is called before the first frame update
    void Start()
    {
        startButton = GetComponent<Button>();
        startButton.onClick.AddListener(StartVisualizer);
        startButton.GetComponentInChildren<TextMeshProUGUI>().text = "Solve";
        playerBoard = boardObj.GetComponent<GameBoardInternal>().playerBoard;
        
    }
    
    public void StartVisualizer() {
        StartCoroutine(Solve());
        startButton.onClick.RemoveAllListeners();
        startButton.GetComponentInChildren<TextMeshProUGUI>().text = "Stop";
        startButton.onClick.AddListener(StopVisualizer);
    }

    public void StopVisualizer() {
        StopAllCoroutines();
        currentCell.GetComponent<Image>().color = originalColor;
        currentCell.GetComponentInChildren<TextMeshProUGUI>().text = "";

        startButton.GetComponentInChildren<TextMeshProUGUI>().text = "Solve";
        startButton.onClick.AddListener(StartVisualizer);
    }

    IEnumerator Solve() {
        int[][] boardValues = playerBoard.board;
        Button[,] buttons = boardUI.boardElements;

        Dictionary<string, int> encountered = new Dictionary<string, int>();
        int rowIdx = 0;
        bool goBack = false;
        bool rowBack = false;

        while (rowIdx < boardValues.Length) {
            int[] cRow = boardValues[rowIdx];

            int colIdx = rowBack ? cRow.Length - 1 : 0;
            while (colIdx < cRow.Length) {
                if (colIdx < 0) {
                    break;
                }

                if (playerBoard.unchangedBoard[rowIdx][colIdx] != 0) {
                    colIdx += goBack ? -1 : 1;
                    continue;
                }

                int[] pos = { colIdx, rowIdx };
                string posKey = colIdx.ToString() + rowIdx.ToString();

                if (!encountered.ContainsKey(posKey)) {
                    encountered.Add(posKey, 0);
                }

                currentCell = buttons[rowIdx, colIdx];
                TextMeshProUGUI cellText = currentCell.gameObject.GetComponentInChildren<TextMeshProUGUI>();
                Image cellImage = buttons[rowIdx, colIdx].gameObject.GetComponent<Image>();
                int guess = encountered[posKey] + 1;
                Color temp = cellImage.color;
                while (guess <= 9) {
                    Move move = new Move(pos, guess);
                    bool madeMove = playerBoard.MakeMove(move);
                    cellText.text = guess.ToString();
                    if (madeMove) {
                        cellImage.color = Color.green;
                        yield return new WaitForSeconds(0.1f);
                        break;
                    }

                    cellImage.color = Color.red;
                    yield return new WaitForSeconds(0.1f);
                    cellImage.color = temp;
                    cellText.text = "";
                    guess += 1;
                }
                cellImage.color = temp;

                if (guess > 9) {
                    encountered[posKey] = 0;
                    boardValues[rowIdx][colIdx] = 0;
                    cellText.text = "";
                    colIdx -= 1;
                    goBack = true;
                }
                else {
                    encountered[posKey] = guess;
                    colIdx += 1;
                    goBack = false;
                }
            }

            if (colIdx < 0) {
                rowIdx -= 1;
                rowBack = true;
            }
            else {
                rowIdx += 1;
                rowBack = false;
            }
        }

        yield return null;
    }
}
