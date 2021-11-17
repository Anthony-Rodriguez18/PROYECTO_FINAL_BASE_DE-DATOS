#ifndef MENU_H_
#define MENU_H_

enum MenuState
{
    UNKNOWNK = 0,
    ADMINISTRATOR = 1,
    TEACHER = 2,
    STUDENT = 3,
    END = 4
};

class Menu
{
  protected:
    MenuState userType;

  public:
    void setUserType(MenuState);

    void init();
    int getMainOption();
    int login(std::string, std::string);
    std::string actionSelection();
    bool createAdmin();
    bool createTeacher();
    bool createStudent();
};

#endif