#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x+y;
}

float add(float x, float y)
{
    return x+y;
}

int add(int x, int y, int z)
{
    return x+y+z;
}

int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10.2f,20.8f)<<endl;
    cout<<add(10,20,30)<<endl;

}
