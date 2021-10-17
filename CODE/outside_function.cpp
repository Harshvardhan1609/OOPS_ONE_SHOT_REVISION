#include <iostream>
using namespace std;

class class_1
{
public:
    string name;
    int age;
    int roll_no;

    void print_data(class_1 on); //declare
}student_1;

void print_data(class_1 on) //defination
{
    cout << on.name << " " << on.age << " " << on.roll_no << endl;
}

int main()
{
    student_1.name = "harsh";
    student_1.age = 18;
    student_1.roll_no = 16;

    print_data(student_1);

    //harsh 18 16

    return 0;
}