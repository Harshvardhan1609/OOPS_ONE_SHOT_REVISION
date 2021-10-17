#include <iostream>
using namespace std;

class class_1 // This is how we declare class
{
public: // Data members = objects ki value ko store karte hai
    string name;
    int age;
    int roll_no;

    void print_data() // Data member pe functions hue use hum member functions bolte ha
    {
        cout << name << " " << age << " " << roll_no << endl;
    }

}; // object array

// mereko access karna hai student1 .

int main()
{ // object array

    class_1 student[10]; //object array bangayega 
     
    student[0].name = "harsh";
    student[0].age = 18;
    student[0].roll_no = 12;


    student[1].name = "harsh";
    student[1].age = 18;
    student[1].roll_no = 12;


    student[2].name = "harsh";
    student[2].age = 18;
    student[2].roll_no = 12;


    student[3].name = "harsh";
    student[3].age = 18;
    student[3].roll_no = 12;


    student[0].print_data();

    return 0;
}

//harsh 18 12

// ram 12 16

// ram 12 16