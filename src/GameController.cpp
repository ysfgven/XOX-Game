#include "Screens.h"
#include <iostream>
#include "GameController.h"
#include "Users.h"
#include <cstdlib>


int GameController::checkWinner(char cells[9]) {
    for(int i = 0; i <= 6; i += 3)
        if(cells[i] == cells[i+1] && cells[i+1] == cells[i+2])
            return 1;

    for(int i = 0; i < 3; i++)
        if(cells[i] == cells[i+3] && cells[i+3] == cells[i+6])
            return 1;

    if(cells[0] == cells[4] && cells[4] == cells[8])
        return 1;
    if(cells[2] == cells[4] && cells[4] == cells[6])
        return 1;

    return 0;
}

void GameController::setUsers(const Users& u1, const Users& u2) {
    user1 = u1;
    user2 = u2;
}

int GameController::getMove(Users& player, char cells[9]){
    int move;
    while (true) {
        std::cout << player.getUserName() << "'s turn. Choose a cell (1-9): ";
        std::cin >> move;
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid input! Enter a number 1-9.\n";
            continue;
        }

        if(move < 1 || move > 9 || cells[move-1] == user1.getSymbol() || cells[move-1] == user2.getSymbol()) {
            std::cout << "Invalid move! Try again." << std::endl;
        } else {
            break;
        }
    }
    return move;
}

bool GameController::isDraw(char cells[9]) {
    for(int i = 0; i < 9; i++)
        if(cells[i] != user1.getSymbol() && cells[i] != user2.getSymbol())
            return false;
    return true;
}

void GameController::gameStart() {
    if (user1.getUserName().empty() || user2.getUserName().empty()) {
        std::cout << "Error: users not set in GameController. Call setUsers(...) before gameStart().\n";
        return;
    }

    char cells[9] = {'1','2','3','4','5','6','7','8','9'};
    char currentSymbol = user1.getSymbol();
    Users lastPlayer;

    std::cout << "Let's start with " << user1.getUserName() << std::endl;

    while (true) {
        screen.board(cells);

        lastPlayer = (currentSymbol == user1.getSymbol()) ? user1 : user2;
        int move = getMove(lastPlayer, cells);

        cells[move-1] = currentSymbol;

        if(checkWinner(cells) == 1) {
            screen.board(cells);
            std::cout << lastPlayer.getUserName() << " wins!" << std::endl;
            break;
        }

        if(isDraw(cells)) {
            screen.board(cells);
            std::cout << "It's a draw!" << std::endl;
            break;
        }

        currentSymbol = (currentSymbol == user1.getSymbol()) ? user2.getSymbol() : user1.getSymbol();
        system("CLS");
    }
    std::cout << "\nPress Enter to exit...";
    std::cin.ignore();
    std::cin.get();
}
