#include "Student.h"
using namespace std;
Student::Student(string a, string b, bool c, string d, string e, string f)
    : Stu_Name(a), Stu_ID(b), Stu_Sex(c), Stu_Class(d), Stu_Birthday(e), Stu_Address(f)
{
}
Student::~Student()
{
}
string Student::getNameStu() const
{
    return this->Stu_Name;
}
void Student::AddClasses(Class *)
{
}
string Student::getID() const
{
    return this->Stu_ID;
}

string Student::getSex() const
{
    if (this->Stu_Sex)
        return "Nam";
    else
        return "Nu";
}
string Student::getClass() const
{
    return this->Stu_Class;
}
void Student::getBirthday() const
{
    for (int i = 0; i < 8; i++)
    {
        cout << Stu_Birthday[i];
        if (i == 1 || i == 3)
            cout << "/";
    }
    // return this->Stu_Birthday;
}
string Student::getAddress() const
{
    return this->Stu_Address;
}
