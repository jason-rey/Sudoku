using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartGame : MonoBehaviour
{
    [SerializeField] GameObject boardUIPrefab;

    private void Start() {
        GetComponent<Button>().onClick.AddListener(StartOnClick);
    }

    public void StartOnClick() {
        GameObject board = Instantiate(boardUIPrefab);
        board.SetActive(true);
        GameObject.Find("StartMenu").SetActive(false);
    }
}
