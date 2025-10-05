#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include "Screens.h"
#include "Users.h"


class GameController {
private:
    Users user1;
    Users user2;
    Users getUsers(int index) const;
    Screens screen;
    int getMove(Users& player,char cells[9]);
    int checkWinner(char cells[9]);
    bool isDraw(char cells[9]);

public:
    void setUsers(const Users& u1, const Users& u2);
    void gameStart();

};


#endif //GAMECONTROLLER_H
