#include "Class.h"
using namespace std;
Class::Class(string a, string b)
    : Cls_Name(a), Cls_Department(b)
{
}
Class::~Class()
{
}
void Class::AddStudent(Student *s)
{
    this->Students.push_back(s);
    s->AddClasses(this);
}
string Class::getNameCls()
{
    return this->Cls_Name;
}
ostream &operator<<(ostream &o, const Class &c)
{
    int m = c.Students.size();
    if (m == 0)
        o << "Hien tai lop nay khong co hoc sinh nao ca!";
    else
    {
        cout << "Lop " << c.Cls_Name << " thuoc Khoa " << c.Cls_Department << " co cac sinh vien la: " << endl;
        for (int i = 0; i < m; i++)
        {
            o << i + 1 << ") ";
            o << "Ho va ten: " << c.Students[i]->getNameStu() << endl;
            o << "MSSV: " << c.Students[i]->getID() << endl;
            o << "Gioi tinh: " << c.Students[i]->getSex() << endl;
            o << "Lop: " << c.Students[i]->getClass() << endl;
            // cout << "Ngay Sinh: " << c.Students[i]->getBirthday() << endl;
            o << "Ngay Sinh: ";
            c.Students[i]->getBirthday();
            o << endl;
            o << "Dia chi: " << c.Students[i]->getAddress() << endl;
        }
    }
    return o;
}