#include "../include/basic.h"

PermissionUser::PermissionUser()
{
    ;
}

std::list<PermissionUser *> PermissionUser::getAll()
{
    std::string delimiter = DELIMITER;
    std::ifstream file("permissions_users.txt");
    std::string line;

    std::string properties[NUMBER_PERMISSION_USER_PROPERTIES];

    std::list<PermissionUser *> permissionUsers;

    while (std::getline(file, line))
    {
        std::stringstream ssin(line);
        int index_properties = 0;
        size_t position = 0;

        while ((position = line.find(delimiter)) != std::string::npos)
        {
            std::string value = line.substr(0, position);
            properties[index_properties] = value;
            ++index_properties;
            line.erase(0, position + delimiter.length());
        }
        properties[index_properties] = line;

        PermissionUser *const permissionUser = new PermissionUser();
        permissionUser->setID(std::stoi(properties[0]));
        permissionUser->setPermissionId(std::stoi(properties[1]));
        permissionUser->setUserId(std::stoi(properties[2]));

        permissionUsers.push_front(permissionUser);
    }
    return permissionUsers;
}
std::list<PermissionUser *> PermissionUser::getAllByUser(int value_)
{
    std::list<PermissionUser *> permissionUsers = this->getAll();
    std::list<PermissionUser *> newPermissionUsers;

    for (const auto &item : permissionUsers)
    {
        if (item->getUserId() == value_)
            newPermissionUsers.push_front(item);
    }

    return newPermissionUsers;
}