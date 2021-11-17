#include "../include/basic.h"

Permission::Permission()
{
    ;
}

Permission *Permission::getById(int value_)
{
    std::list<Permission *> permissions = this->getAll();

    for (const auto &item : permissions)
    {
        if (item->getID() == value_)
            return item;
    }
    return nullptr;
}

std::list<Permission *> Permission::getAll()
{
    std::string delimiter = DELIMITER;
    std::ifstream file("permissions.txt");
    std::string line;

    std::string properties[NUMBER_PERMISSION_PROPERTIES];

    std::list<Permission *> permissions;

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

        Permission *const permission = new Permission();
        permission->setID(std::stoi(properties[0]));
        permission->setName(properties[1]);
        permission->setDescription(properties[2]);

        permissions.push_front(permission);
    }
    return permissions;
}