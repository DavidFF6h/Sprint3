#ifndef GAME_H
#define GAME_H

#include <vector>
#include "CellState.h"
#include "GameMode.h"
#include "SimpleGame.h"
#include "GeneralGame.h"

class Game {
public:
    Game(int size);

    void initGameBoard(int size);
    void resetGame(int size);
    void setCellState(int row, int col, int currentPlayer, int selected_radio1, int selected_radio2);
    void switchGameMode(int mode);
    CellState getCurrentPlayerSymbol(int currentPlayer, int selected_radio1, int selected_radio2);

    const std::vector<std::vector<CellState>>& getGameBoard() const;

private:
    std::vector<std::vector<CellState>> gameBoard;
    GameMode* currentMode;
};

#endif


