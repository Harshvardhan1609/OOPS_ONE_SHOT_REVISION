#include <iostream>
using namespace std;

int main()
{
    double *ptr = new double;
    *ptr = 90.1;
    // cout<<*ptr;
    // //output of *ptr = 90.1
    // cout<<ptr;
    // //output = 0xfb1510 (dynamic memory address ha ptr ka )

    //delete use karenge 
    delete ptr;

    cout<<ptr;
    //output : 0x1191510 garbage value 

    return 0;
}