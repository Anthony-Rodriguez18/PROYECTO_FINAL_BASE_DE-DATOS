#ifndef TEACHER_H_
#define TEACHER_H_

class Teacher : public User
{
  public:
    std::string teachCourses;
    double salary;
    std::string professionalProfile;
    char substitute;
};

#endif