#include "../include/basic.h"

Role::Role()
{
    ;
}

Role *Role::getById(int value_)
{
    std::string delimiter = "|";
    std::ifstream file("users.txt");
    std::string line;

    std::string properties[NUMBER_USER_PROPERTIES];

    Role *const role = new Role();

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

        role->setID(
            // properties[0]
            1
        );
        role->setName(properties[1]);
        role->setDescription(properties[2]);

        if (role->ID == value_)
            return role;
    }
    return nullptr;
}