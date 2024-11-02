#include "SimpleGame.h"

bool SimpleGame::checkWin(const std::vector<std::vector<CellState>>& gameBoard, int row, int col, int currentPlayer) {
    if (hasSOS(gameBoard, row, col)) {
        std::cout << (currentPlayer == 0 ? "Blue" : "Red") << " player wins the Simple Game!" << std::endl;
        return true;
    }
    return false;
}

void SimpleGame::displayWinner() {
    // No end-game check needed for SimpleGame; winner is printed immediately
}

