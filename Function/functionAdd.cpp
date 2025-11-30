#include <iostream>
using namespace std;

int add(int x ,int y)
{
    int z= x+y;
    return z;
}

int main()
{
    int x=10,y=20,sum;
    sum=add(x,y);
    cout<<sum;

}
