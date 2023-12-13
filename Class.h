#pragma once
#include "Student.h"
using namespace std;

class Student;
class Class
{
    string Cls_Name;
    string Cls_Department;
    vector<Student *> Students;

public:
    Class(string = " ", string = " ");
    ~Class();
    string getNameCls();
    void AddStudent(Student *);
    friend ostream &operator<<(ostream &, const Class &);
};