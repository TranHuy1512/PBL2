#include "Student.cpp"
#include "Class.cpp"
using namespace std;

int main()
{
    Student *a1 = new Student("Tran Duc Huy", "102220023", 1, "22T_KHDL", "15122004", "77 Le Do");
    Student *a2 = new Student("Vo Tien Khoa", "102220028", 1, "22T_KHDL", "24052004", "Phuogntroixa");
    Class *c1 = new Class("22T_KHDl", "CNTT");
    c1->AddStudent(a1);
    c1->AddStudent(a2);
    cout << *c1;
    delete a1;
    delete a2;
    delete c1;
    return 0;
    cout << "Hello 10 diem";
}
