#include <iostream>
using namespace std; // standard library (cout , cin )

void add(int a, int b)
{
    int sum = a + b;
    cout << sum << endl;
}
void add(double a, double b)
{
    double sum = a + b;
    cout << sum << endl;
}
void add(int a, double b)
{
    double sum = a + b;
    cout << sum << endl;
}
void add(double a, int b)
{
    double sum = a + b;
    cout << sum << endl;
}

int main()
{
    add(1,2);
    add(1.2,8.9);

    return 0;
}

// 3 
//10.1