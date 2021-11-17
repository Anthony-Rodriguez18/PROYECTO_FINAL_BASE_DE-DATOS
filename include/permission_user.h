#ifndef PERMISSION_USER_H_
#define PERMISSION_USER_H_

#define NUMBER_PERMISSION_USER_PROPERTIES 3

class PermissionUser
{
  protected:
    int ID;
    int permissionId;
    int userId;

  public:
    PermissionUser();
    ~PermissionUser();

    std::list<PermissionUser *> getAll();
    std::list<PermissionUser *> getAllByUser(int);

    void setID(int value_)
    {
        this->ID = value_;
    }
    void setPermissionId(int value_)
    {
        this->permissionId = value_;
    }
    void setUserId(int value_)
    {
        this->userId = value_;
    }

    int getID()
    {
        return this->ID;
    }
    int getPermissionId()
    {
        return this->permissionId;
    }
    int getUserId()
    {
        return this->userId;
    }
};

#endif