#include <iostream>
using namespace std;

int cuboid(int l , int b=9 , int h=9) //right to left 
{
    return l * b * h;
}

int main()
{
    int volume = cuboid(10);
    cout << "The volume of the cuboid is : " << volume << endl;
    return 0;
}
// The volume of the cuboid is : 810
// The volume of the cuboid is : 1000

// The volume of the cuboid is : 6

//Default arguments : wo values jo phele se default di hui hoti hai or agar user koi or value daale to change bhi hoti hai 