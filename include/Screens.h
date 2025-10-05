#ifndef SCREENS_H
#define SCREENS_H
#include "Users.h"

class Screens {
private:


public:
    void enterScreenDisplay();
    int gameStartScreen();
    void board(char cells[9]);
    void gameScreen();

    Users getUserInput(int playerNumber);
};

#endif //SCREENS_H
