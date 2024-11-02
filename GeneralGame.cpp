#include "GeneralGame.h"

GeneralGame::GeneralGame() : blueScore(0), redScore(0) {}

bool GeneralGame::checkWin(const std::vector<std::vector<CellState>>& gameBoard, int row, int col, int currentPlayer) {
    if (hasSOS(gameBoard, row, col)) {
        if (currentPlayer == 0) blueScore++;
        else redScore++;
    }
    return false; 
}

void GeneralGame::displayWinner() {
    if (blueScore > redScore)
        std::cout << "Blue player wins the General Game with " << blueScore << " SOSs!" << std::endl;
    else if (redScore > blueScore)
        std::cout << "Red player wins the General Game with " << redScore << " SOSs!" << std::endl;
    else
        std::cout << "The General Game is a draw!" << std::endl;
}
