#include "../include/basic.h"

User::User()
{
    ;
}

std::list<User *> User::getAll()
{
    std::string delimiter = DELIMITER;
    std::ifstream file("users.txt");
    std::string line;

    std::string properties[NUMBER_USER_PROPERTIES];

    std::list<User *> users;

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

        User *const user = new User();
        user->setID(std::stoi(properties[0]));
        user->setDNI(std::stol(properties[1]));
        user->setPhone(std::stol(properties[2]));
        user->setFirstName(properties[3]);
        user->setLastName(properties[4]);
        user->setEmail(properties[5]);
        user->setAddress(properties[6]);
        user->setUsername(properties[7]);
        user->setPassword(properties[8]);
        user->setRoleId(std::stoi(properties[9]));

        users.push_front(user);
    }
    return users;
}