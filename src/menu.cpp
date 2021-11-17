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
    std::list<User *> users = user->getAll();

    for (const auto &item : users)
    {
        if (item->getUsername() == username_ && item->getPassword() == password_)
            return item->getRoleId();
    }
    return 0;
}

void Menu::init()
{
    int roleId = this->login("maria123", "jadfsdf");

    Role *const role = new Role();
    role->getById(roleId);

    std::cout << role << std::endl;

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