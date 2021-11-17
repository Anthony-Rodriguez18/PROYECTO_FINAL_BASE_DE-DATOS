#ifndef PERMISSION_H_
#define PERMISSION_H_

#define NUMBER_PERMISSION_PROPERTIES 3

enum PermissionType
{
    INSERT = 1,
    UPDATE = 2,
    DELETE = 3,
    READ = 4
};

class Permission
{
  protected:
    int ID;
    std::string name;
    std::string description;

  public:
    Permission();
    ~Permission();

    Permission *getById(int);
    std::list<Permission *> getAll();

    void setID(int value_)
    {
        this->ID = value_;
    }
    void setName(std::string value_)
    {
        this->name = value_;
    }
    void setDescription(std::string value_)
    {
        this->description = value_;
    }

    int getID()
    {
        return this->ID;
    }
    std::string getName()
    {
        return this->name;
    }
    std::string getDescription()
    {
        return this->description;
    }
};

#endif