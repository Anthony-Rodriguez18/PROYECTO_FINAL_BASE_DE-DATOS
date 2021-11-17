#include "../include/basic.h"

void Menu::init()
{
    std::string username;
    std::string password;

    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;

    User *const user = this->login(username, password);

    this->loadPermissions(user->getID());
    // Role *const role = new Role();
    // role->getById(user->getRoleId())->getID()

    switch (user->getRoleId())
    {
    case RoleType::ADMINISTRATOR:
        std::cout << "Administrator" << std::endl;
        break;
    case RoleType::TEACHER:
        std::cout << "Teacher" << std::endl;
        break;
    case RoleType::STUDENT:
        std::cout << "Student" << std::endl;
        break;

    default:
        break;
    }
}

User *Menu::login(std::string username_, std::string password_)
{
    User *const user = new User();
    std::list<User *> users = user->getAll();

    for (const auto &item : users)
    {
        if (item->getUsername() == username_ && item->getPassword() == password_)
            return item;
    }
    return nullptr;
}

void Menu::loadPermissions(int value_)
{
    PermissionUser *const permissionUser = new PermissionUser();
    std::list<PermissionUser *> filterPermissionUser = permissionUser->getAllByUser(value_);

    Permission *const permission = new Permission();
    std::list<int> permissions;

    for (const auto &item : filterPermissionUser)
    {
        int permissionId = permission->getById(item->getPermissionId())->getID();
        permissions.push_front(permissionId);
    }
    this->setPermissions(permissions);
}