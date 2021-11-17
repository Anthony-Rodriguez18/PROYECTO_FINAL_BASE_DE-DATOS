#ifndef PERMISSION_H_
#define PERMISSION_H_

class Permission
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