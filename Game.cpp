#include "Game.h"

Game::Game(int size) {
    initGameBoard(size);
    currentMode = new SimpleGame();
}

void Game::initGameBoard(int size) {
    gameBoard.clear();
    gameBoard.resize(size, std::vector<CellState>(size, EMPTY));
}

void Game::resetGame(int size) {
    initGameBoard(size);
}

CellState Game::getCurrentPlayerSymbol(int currentPlayer, int selected_radio1, int selected_radio2) {
    if (currentPlayer == 0) { // Blue player
        return selected_radio1 == 0 ? S_BLUE : O_BLUE; // S or O
    }
    else { // Red player
        return selected_radio2 == 0 ? S_RED : O_RED; // S or O
    }
}

void Game::setCellState(int row, int col, int currentPlayer, int selected_radio1, int selected_radio2) {
    if (gameBoard[row][col] == EMPTY) {
        gameBoard[row][col] = getCurrentPlayerSymbol(currentPlayer, selected_radio1, selected_radio2);
        if (currentMode->checkWin(gameBoard, row, col, currentPlayer)) {
        }
    }
}

void Game::switchGameMode(int mode)
{
    delete currentMode;
    if (mode == 0) {
        currentMode = new SimpleGame();
    }
    else {
        currentMode = new GeneralGame();
    }
}

const std::vector<std::vector<CellState>>& Game::getGameBoard() const {
    return gameBoard;
}

