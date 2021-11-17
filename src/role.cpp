#include "../include/basic.h"

Role::Role()
{
    ;
}

Role *Role::getById(int value_)
{
    std::list<Role *> roles = this->getAll();

    for (const auto &item : roles)
    {
        if (item->getID() == value_)
            return item;
    }
    return nullptr;
}

std::list<Role *> Role::getAll()
{
    std::string delimiter = DELIMITER;
    std::ifstream file("roles.txt");
    std::string line;

    std::string properties[NUMBER_ROLE_PROPERTIES];

    std::list<Role *> roles;

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

        Role *const role = new Role();
        role->setID(std::stoi(properties[0]));
        role->setName(properties[1]);
        role->setDescription(properties[2]);

        roles.push_front(role);
    }
    return roles;
}