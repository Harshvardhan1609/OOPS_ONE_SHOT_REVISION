#include <iostream>
using namespace std;

class class_1
{ // By default private specifier
protected:
    string name;
    int age;
    int roll_no;

    void prove()
    {
        cout << name << endl;
    }

}student1;

class class_2 : public class_1
{
public:

    
    void print()
    {
        cout << name << endl;
    }
}student2;

int main()
{
    student2.print();

    return 0;
}