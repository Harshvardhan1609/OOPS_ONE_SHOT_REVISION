#include <iostream>
using namespace std;

int main()
{
    int a = 90;
    int& b = a; //b nickname dedo a 

    int& c = a; // c nickname dedo a ka 


    //90 = output

    cout<<c;

    return 0;
}