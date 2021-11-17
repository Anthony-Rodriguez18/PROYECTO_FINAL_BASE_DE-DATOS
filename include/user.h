#ifndef USER_H_
#define USER_H_

#define NUMBER_USER_PROPERTIES 10

class User
{
  protected:
    int ID;
    long DNI;
    long phone;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string address;

    std::string username;
    std::string password;
    int roleId;

  public:
    User();
    ~User();

    User *getById();
    std::list<User *> getAll();

    void setID(int value_)
    {
        this->ID = value_;
    }
    void setDNI(long value_)
    {
        this->DNI = value_;
    }
    void setPhone(long value_)
    {
        this->phone = value_;
    }
    void setFirstName(std::string value_)
    {
        this->firstName = value_;
    }
    void setLastName(std::string value_)
    {
        this->lastName = value_;
    }
    void setEmail(std::string value_)
    {
        this->email = value_;
    }
    void setAddress(std::string value_)
    {
        this->address = value_;
    }
    void setUsername(std::string value_)
    {
        this->username = value_;
    }
    void setPassword(std::string value_)
    {
        this->password = value_;
    }
    void setRoleId(int value_)
    {
        this->roleId = value_;
    }

    int getID()
    {
        return this->ID;
    }
    long getDNI()
    {
        return this->DNI;
    }
    long getPhone()
    {
        return this->phone;
    }
    std::string getFirstName()
    {
        return this->firstName;
    }
    std::string getLastName()
    {
        return this->lastName;
    }
    std::string getEmail()
    {
        return this->email;
    }
    std::string getAddress()
    {
        return this->address;
    }
    std::string getUsername()
    {
        return this->username;
    }
    std::string getPassword()
    {
        return this->password;
    }
    int getRoleId()
    {
        return this->roleId;
    }
};

#endif