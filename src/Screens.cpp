#include "Screens.h"
#include <iostream>
#include "Users.h"


Users Screens::getUserInput(int playerNumber) {
    std::string name;
    char symbol;

    std::cout << "Enter name for Player " << playerNumber << ": ";
    std::cin >> name;
    std::cout << "Choose X or O: ";
    while (true) {
        std::cin >> symbol;

        if (symbol == 'X' || symbol == 'x') {
            symbol = 'X';
            break;
        }
        else if (symbol == 'O' || symbol == 'o') {
            symbol = 'O';
            break;
        }
        else {
            std::cout << "Invalid Input.Please enter X or O" << std::endl;
        }
    }
    return Users(name, symbol);

}
void Screens::enterScreenDisplay() {
    std::cout << "Welcome to the XOX game!" << std::endl;
    std::cout << "Press enter to continue." << std::endl;
    std::cin.ignore();

}

void Screens::board(char cells[9]) {
    std::cout << " " << cells[0] << " | " << cells[1] << " | " << cells[2] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << cells[3] << " | " << cells[4] << " | " << cells[5] << std::endl;
    std::cout << "---|---|---" << std::endl;
    std::cout << " " << cells[6] << " | " << cells[7] << " | " << cells[8] << std::endl;
}










//
// Created by yusuf on 5.10.2025.
//

#include "Screens.h"
