#include "GameMode.h"

bool GameMode::hasSOS(const std::vector<std::vector<CellState>>& gameBoard, int row, int col) {
    return checkPattern(gameBoard, row, col, 1, 0) || // Horizontal
        checkPattern(gameBoard, row, col, 0, 1) || // Vertical
        checkPattern(gameBoard, row, col, 1, 1) || // Diagonal 
           checkPattern(gameBoard, row, col, 1, -1);  // Diagonal 
}

bool GameMode::checkPattern(const std::vector<std::vector<CellState>>& board, int row, int col, int dRow, int dCol) {
    int size = board.size();
    if (row + 2 * dRow < 0 || row + 2 * dRow >= size || col + 2 * dCol < 0 || col + 2 * dCol >= size) {
        return false;
    }
    return (board[row][col] == S_BLUE || board[row][col] == S_RED) &&
        (board[row + dRow][col + dCol] == O_BLUE || board[row + dRow][col + dCol] == O_RED) &&
        (board[row + 2 * dRow][col + 2 * dCol] == board[row][col]);
}

