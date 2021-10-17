#include <iostream>
using namespace std;

class student
{
    public:
        string name;
        int age;
        int roll_no;

    student(string s , int a , int r)
    {
        name = s;
        age = a;
        roll_no = r;
    }
    //parameterized constructors 


    void print_info()
    {
        cout<<"name: "<<name<<" age: "<<age<<" roll_no: "<<roll_no<<endl;
    }
    

};


int main()
{
    student o1("harsh",89,90); //harsh = name , 89 = age , 90 = rollno 
    o1.print_info();
    // name: harsh age: 89 roll_no: 90
    
        return 0;
}