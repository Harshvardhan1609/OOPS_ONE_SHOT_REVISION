#include <iostream>
using namespace std;

class student
{
    public:
    //koi bhi constructor hota hai wo public me hi declare hota hai 
        string name;
        int age;
        int roll_no;

    student( student &a) //copy constructor 
    {
        name = a.name;
        age = a.age;
        roll_no = a.roll_no;
    }

    //copy constructor parameterized constructor ki value hi copy karenge .

    student( string h , int a , int r) //parameterized constructor
    {
        name = h;
        age = a;
        roll_no = r;
    }
    //copy consturctor 


    void print_info()
    {
        cout<<"name: "<<name<<" age: "<<age<<" roll_no: "<<roll_no<<endl;
    }
    

};


int main()
{
    student a("harsh",89,19);

    student c = a; //ise copy hogaya hai 

    c.print_info();
    
        return 0;
}
// name: raj age: 20 roll_no: 30

// name: harsh age: 89 roll_no: 19