#include <iostream>
using namespace std;

class student
{
    public:
    int a , b;

    void square(int a , int b)
    {
        int sum  = a+b;
        int answer = d_2(sum);
        cout<<answer<<endl;
    }

    int d_2(int s)
    {
        return s*s;
    }

}s;

int main()
{
    s.square(12,12);
    return 0;
}

//nesting of member function