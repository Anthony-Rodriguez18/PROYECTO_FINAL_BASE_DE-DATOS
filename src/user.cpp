#include "../include/basic.h"

User::User()
{
    ;
}

void User::setID(int value_)
{
    this->ID = value_;
}

void User::setDNI(long value_)
{
    this->DNI = value_;
}

void User::setPhone(long value_)
{
    this->phone = value_;
}

void User::setFirstName(std::string value_)
{
    this->firstName = value_;
}

void User::setLastName(std::string value_)
{
    this->lastName = value_;
}

void User::setEmail(std::string value_)
{
    this->email = value_;
}

void User::setAddress(std::string value_)
{
    this->address = value_;
}

void User::setUsername(std::string value_)
{
    this->username = value_;
}

void User::setPassword(std::string value_)
{
    this->password = value_;
}

void User::setRoleId(int value_)
{
    this->roleId = value_;
}

void User::getByAuth(std::string username_, std::string password_)
{
    std::string delimiter = "|";
    std::ifstream file("users.txt");
    std::string line;

    std::string properties[NUMBER_USER_PROPERTIES];

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
        // user->setID(std::stoi(properties[0]));
        // user->setDNI(std::stol(properties[1]));
        // user->setPhone(std::stol(properties[2]));
        // user->setFirstName(properties[3]);
        // user->setLastName(properties[4]);
        // user->setEmail(properties[5]);
        // user->setAddress(properties[6]);
        user->setUsername(properties[7]);
        user->setPassword(properties[8]);
        // user->setRoleId(std::stoi(properties[10]));

        std::cout << user->username << std::endl;
    }

    // User *const user = new User();

    // return user;
}