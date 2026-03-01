#ifndef NUMBERLIST_STUDENT_H
#define NUMBERLIST_STUDENT_H
#include <string>

class Student
{
public:
    std::string Name;
    struct Grades {
        float Math, English, History;
    }grade;
    void setName();
    std::string getName();
    void setGradeM();
    float getGradeM();
    void setGradeE();
    float getGradeE();
    void setGradeH();
    float getGradeH();
    float getAverage();
};

#endif 


