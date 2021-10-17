#include <iostream>
using namespace std; // standard library (cout , cin )

void add(string a, string b)
{
    string sum = a + b;
    cout << sum << endl;
}
void add(int a)
{
    int sum = a++;
    cout << sum << endl;
}
void add(int a , int b)
{
    int  sum = a + b;
    cout << sum << endl;
}
void add(double a , double b)
{
    double  sum = a + b;
    cout << sum << endl;
}

int main()
{
    add("harsh","bhuvnesh");
    add(2);

    return 0;
}

//harshbhuvnesh
//3 