#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int roll_no;

    student(string h, int a, int r)
    {
        name = h;
        age = a;
        roll_no = r;
    }

    void print_info()
    {
        cout << name << " " << age << " " << roll_no;
    }
    ~student()
    {
        printf("I am distructor");
    }
};

int main()
{
    student a("harsh", 89, 90);
    a.print_info();
    return 0;
}