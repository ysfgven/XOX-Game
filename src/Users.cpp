#include "Users.h"

Users::Users(const std::string& name, char symbol) {

    userName = name;
    this -> symbol = symbol;
}

char Users::getSymbol() {
    return symbol;
}

std::string Users::getUserName() {
    return userName;
}


