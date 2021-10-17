#include <iostream>
using namespace std;

//friend class : access private and protected members of other class in which it is declared as a friend .

//access deta ha dusri classes ke private members ko use karne ka .

class student
{
    private:
        string name = "harsh";
        int age =  90;
        int roll_no = 90;
    public:
        friend class student_2;

}a;

class student_2
{
    public:
        void print_data(student a)
        {
            cout<<a.name<<" "<<a.age<<" "<<a.roll_no<<endl;
        }
}b;



int main()
{   b.print_data(a);
    return 0;
}

//harsh 90 90