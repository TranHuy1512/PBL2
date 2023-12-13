#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "Class.h"
using namespace std;

class Class;
class Student
{
    string Stu_Name;
    string Stu_ID;
    bool Stu_Sex;
    string Stu_Class;
    string Stu_Birthday;
    string Stu_Address;
    vector<Class *> Classes;

public:
    Student(string = " ", string = " ", bool = 0, string = " ", string = " ", string = " ");
    ~Student();
    string getNameStu() const;
    string getID() const;
    string getSex() const;
    string getClass() const;
    void getBirthday() const;
    string getAddress() const;
    void AddClasses(Class *);
    // Xoasinhvienrakhoidanhsach
    // Timkiemsinhvien
    // sapxepsinhvientheoMSSV
    friend class Class;
};
