#ifndef USERS_H
#define USERS_H
#include <string>



class Users {
private:
    std::string userName;
    char symbol;
public:
    Users() = default;
    Users(const std::string& name, char symbol);
    std::string getUserName();
    char getSymbol();

};


#endif //USERS_H
