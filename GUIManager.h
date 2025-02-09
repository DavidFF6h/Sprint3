#ifndef GUIMANAGER_H
#define GUIMANAGER_H

#include "Game.h"

class GUIManager {
public:
    void renderGUI(int& currentPlayer, int& selected_radio1, int& selected_radio2, bool& newGameTriggered, int& dummyBoardSize, int& newBoardSize);
    void renderGameBoard(Game& game, int& currentPlayer, int selected_radio1, int selected_radio2, int newBoardSize);
};

#endif