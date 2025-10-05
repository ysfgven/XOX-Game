#ifndef SCREENCONTROLLER_H
#define SCREENCONTROLLER_H
#include "GameController.h"
#include "Screens.h"


class ScreenController {
private:
    Screens screens;
    GameController gameController;
public:
    void screenControl();
};



#endif //SCREENCONTROLLER_H
