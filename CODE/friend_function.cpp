#include <iostream>
using namespace std;

//friend function : special grant to access private and protected members of the class ..

//friend function is defined outside the class ..
//firend function has the ability to access private and protected members of the class ..

class student
{
    int a , b;
    public:
    void set_value()
    {
        a = 100;
        b = 90;
    }

    friend int fun(student s); //declaring an friend function
};

int fun(student s) //defining an function
{
    cout<<"The sum of the two numbers is : "<<s.a+s.b<<endl;
}

int main()
{
    student s;
    s.set_value();
    fun(s);

        return 0;
}


// The sum of the two numbers is : 190