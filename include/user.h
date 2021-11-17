#ifndef USER_H_
#define USER_H_

#define NUMBER_USER_PROPERTIES 10

class User: public Database
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

    void setID(int);
    void setDNI(long);
    void setPhone(long);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setEmail(std::string);
    void setAddress(std::string);

    void setUsername(std::string);
    void setPassword(std::string);
    void setRoleId(int);

    int getID()
    {
        this->ID;
    }
    long getDNI()
    {
        this->DNI;
    }
    long getPhone()
    {
        this->phone;
    }
    std::string getFirstName()
    {
        this->firstName;
    }
    std::string getLastName()
    {
        this->lastName;
    }
    std::string getEmail()
    {
        this->email;
    }
    std::string getAddress()
    {
        this->address;
    }

    std::string getUsername()
    {
        this->username;
    }
    std::string getPassword()
    {
        this->password;
    }
    int getRoleId()
    {
        this->roleId;
    }

    void getByAuth(std::string, std::string);
};

#endif