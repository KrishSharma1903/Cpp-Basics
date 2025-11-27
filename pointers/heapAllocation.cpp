#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    p[2]=10;
    cout<<p[2];
    delete []p;
     p=NULL;
}
