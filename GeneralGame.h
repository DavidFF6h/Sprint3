#ifndef GENERALGAME_H
#define GENERALGAME_H

#include "GameMode.h"
#include <iostream>

class GeneralGame : public GameMode {
public:
    GeneralGame();

    bool checkWin(const std::vector<std::vector<CellState>>& gameBoard, int row, int col, int currentPlayer) override;
    void displayWinner() override;

private:
    int blueScore;
    int redScore;
};

#endif


