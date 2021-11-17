#ifndef MENU_H_
#define MENU_H_

class Menu
{
  protected:
    std::list<int> permissions;

  public:
    void init();
    User *login(std::string, std::string);
    void loadPermissions(int);

    int getMainOption();
    std::string actionSelection();
    bool createAdmin();
    bool createTeacher();
    bool createStudent();

    void setPermissions(std::list<int> value_)
    {
        this->permissions = value_;
    }
    std::list<int> getPermissions()
    {
        return this->permissions;
    }
};

#endif