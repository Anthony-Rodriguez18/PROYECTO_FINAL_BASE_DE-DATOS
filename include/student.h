#ifndef STUDENT_H_
#define STUDENT_H_

class Student : public User
{
  public:
    std::string career;
    std::string courses;
    std::string incomePeriod;
    int semester;
    int semesterCredits;
    int accumulatedCredits;
    int notes;
    int monthlyPayment;
};

#endif