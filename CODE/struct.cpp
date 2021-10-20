#include <iostream>
using namespace std;

struct class_1 
{
    string name;
    int age;
    int roll_no;

};

//Structure me app functions nahi baana sakte hai .
//structure me struct keyword ka use hota hai 
//structure me app access specifiers nahi use karsakte ho .


int main()
{
    class_1 o1;
    o1.name = "harsh";
    o1.age = 12;
    o1.roll_no = 20;
    cout << o1.name << " "<< o1.age <<" "<<o1.roll_no<<endl;
    return 0;
}


//harsh 12 19
