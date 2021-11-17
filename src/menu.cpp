#include "../include/basic.h"

int Menu::getMainOption()
{
    int type_;
    std::cout << "\t\t***Universidad las chicas superpoderosas***\t\t" << std::endl;
    std::cout << "[1] Administrador" << std::endl;
    std::cout << "[2] Profesor" << std::endl;
    std::cout << "[3] Alumno" << std::endl;
    std::cout << "[4] Salir" << std::endl;
    std::cout << "Elija una opción..." << std::endl;
    std::cin >> type_;

    return type_;
};

void Menu::setUserType(MenuState type_)
{
    this->userType = type_;
}

int Menu::login(std::string username_, std::string password_)
{
    User *const user = new User();
    user->getByAuth(username_, password_);

    return 0;
}


void Menu::init()
{
    this->login("maria123", "jadfsdf");

    // int type_ = MenuState::UNKNOWNK;

    // do
    // {
    //     type_ = this->getMainOption();

    //     switch (type_)
    //     {
    //     case MenuState::ADMINISTRATOR:
    //         std::cout << "Administrator" << std::endl;
    //         break;
    //     case MenuState::TEACHER:
    //         std::cout << "Teacher" << std::endl;
    //         break;
    //     case MenuState::STUDENT:
    //         std::cout << "Student" << std::endl;
    //         break;

    //     default:
    //         break;
    //     }

    // } while (type_ != MenuState::END);
    
}