#ifndef GAMEMODE_H
#define GAMEMODE_H

#include "CellState.h"
#include <vector>

class GameMode {
public:
    virtual ~GameMode() = default;

    virtual bool checkWin(const std::vector<std::vector<CellState>>& gameBoard, int row, int col, int currentPlayer) = 0;
    virtual void displayWinner() = 0;

protected:
    bool hasSOS(const std::vector<std::vector<CellState>>& gameBoard, int row, int col);
    bool checkPattern(const std::vector<std::vector<CellState>>& board, int row, int col, int dRow, int dCol);
};

#endif





