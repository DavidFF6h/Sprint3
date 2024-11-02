#ifndef SIMPLEGAME_H
#define SIMPLEGAME_H

#include "GameMode.h"
#include <iostream>

class SimpleGame : public GameMode {
public:
    bool checkWin(const std::vector<std::vector<CellState>>& gameBoard, int row, int col, int currentPlayer) override;
    void displayWinner() override;
};

#endif


