#ifndef ROLE_H_
#define ROLE_H_

class Role
{
  protected:
    int ID;
    std::string name;
    std::string description;

  public:
    void setID(int);
    void setName(std::string);
    void setDescription(std::string);

    int getID()
    {
        this->ID;
    }
    std::string getName()
    {
        this->name;
    }
    std::string getDescription()
    {
        this->description;
    }
};

#endif