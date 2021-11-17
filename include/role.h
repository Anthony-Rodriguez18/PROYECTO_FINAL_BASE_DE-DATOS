#ifndef ROLE_H_
#define ROLE_H_

class Role
{
  protected:
    int ID;
    std::string name;
    std::string description;

  public:
    Role();
    ~Role();

    Role *getById(int);

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