using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BoardInternal;
using TMPro;
using UnityEngine.UI;

public class BoardUI : MonoBehaviour
{
    [SerializeField] GameBoardInternal boardLogic;

    [SerializeField] private GameObject boardObj;
    [SerializeField] private GameObject cellPrefab;
    [SerializeField] private GameObject barPrefab;
    [SerializeField] private Button[] boardElements;

    [SerializeField] private int cellSize;
    [SerializeField] private int cellMargin;

    private Board playerBoard;

    void Start() {
        playerBoard = boardLogic.playerBoard;
        boardElements = new Button[playerBoard.board.Length * playerBoard.board[0].Length];
        PlaceCells();
        PlaceBars();
        this.transform.localPosition = new Vector3(-((cellSize + cellMargin) * 9) / 2, ((cellSize + cellMargin) * 9) / 2);

        // selected square here
        for (int i = 0; i < boardElements.Length; i++) {
            Button curr = boardElements[i];
            curr.onClick.AddListener(() => { boardLogic.SetSelectedSquare(curr.gameObject); });
        }

    }

    private int squareSize = 3;
    private int idx = 0;
    void PlaceCells() {
        for (int row = 0; row < playerBoard.board.Length; row++) {
            int[] curr = playerBoard.board[row];
            
            for (int col = 0; col < curr.Length; col++) {
                Vector3 cellPos = new Vector3(col * (cellSize + cellMargin), row * -(cellSize + cellMargin));
                string numText = "";
                if (curr[col] != 0) {
                    numText = curr[col].ToString();
                }

                GameObject cell = Instantiate(cellPrefab, this.transform, false);
                cell.GetComponent<CellPos>().pos = new int[] { col, row };
                RectTransform rectCell = (RectTransform)cell.transform;
                rectCell.sizeDelta = new Vector3(cellSize, cellSize);

                Button cellButton = cell.GetComponent<Button>();
                TextMeshProUGUI cellText = cellButton.GetComponentInChildren<TextMeshProUGUI>();

                cellText.text = numText;
                cellText.fontSize = cellSize;

                boardElements[idx] = cellButton;
                idx += 1;

                Vector3 pos = cellPos;
                cell.transform.localPosition = pos;
            }
        }
    }

    GameObject CreateBar(Vector3 pos, float width, float height) {
        GameObject bar = Instantiate(barPrefab, this.transform, false);
        bar.transform.localPosition = pos;
        RectTransform rT = (RectTransform)bar.transform;
        rT.sizeDelta = new Vector3(width, height);

        return bar;
    }

    void PlaceBars() {
        float width = cellMargin / 2.25f;
        float height = (cellSize + cellMargin) * playerBoard.board.Length;
        int xPrev = 0;

        List<Vector3[]> positions = new List<Vector3[]>();
        //List<Vector3> hPositions = new List<Vector3>();
        for (int i = 0; i < playerBoard.board.Length; i++) {
            int xSum = xPrev + (cellSize + cellMargin);
            xPrev = xSum;

            if ((i + 1) % squareSize != 0 || i == playerBoard.board.Length - 1) {
                continue;
            }

            // vertical
            Vector3 vBarPos = new Vector3(xSum - (cellSize + cellMargin)/2, -height / 2.25f);

            // horizontal
            Vector3 hBarPos = new Vector3(height / 2.25f, -(xSum - (cellSize + cellMargin) / 2));

            positions.Add(new Vector3[]{ vBarPos, hBarPos });
            
        }

        for (int i = 0; i < positions.Count; i++) {
            Vector3[] curr = positions[i];

            CreateBar(curr[0], width, height);
            CreateBar(curr[1], height, width);
        }
    }
}
