#include "ScreenController.h"
#include <cstdlib>

void ScreenController::screenControl() {
    screens.enterScreenDisplay();
    gameController.setUsers(screens.getUserInput(2), screens.getUserInput(1));
    gameController.gameStart();
}