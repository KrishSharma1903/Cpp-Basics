#include <iostream>
using namespace std;
int main()
{
    int A[]={10,20,30,40,50};
    for(auto &x:A)
    {
        cout<<x<<endl;
    }
}