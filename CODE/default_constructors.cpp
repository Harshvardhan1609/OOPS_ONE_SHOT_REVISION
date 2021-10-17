#include <iostream>
using namespace std;

class student
{
    public:
        string name;
        int age;
        int roll_no;

    student()
    {
        name = "raj";
        age = 20;
        roll_no = 30;
    }
    //default  constructors 


    void print_info()
    {
        cout<<"name: "<<name<<" age: "<<age<<" roll_no: "<<roll_no<<endl;
    }
    

};


int main()
{
    student o1;
    o1.print_info();
    // name: harsh age: 89 roll_no: 90
    
        return 0;
}
// name: raj age: 20 roll_no: 30