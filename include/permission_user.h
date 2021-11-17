#ifndef PERMISSION_USER_H_
#define PERMISSION_USER_H_

class PermissionUser
{
  protected:
    int ID;
    int permissionId;
    int userId;

  public:
    void setID(int);
    void setPermissionId(int);
    void setUserId(int);

    int getID()
    {
        this->ID;
    }
    int getPermissionId()
    {
        this->permissionId;
    }
    int getUserId()
    {
        this->userId;
    }
};

#endif