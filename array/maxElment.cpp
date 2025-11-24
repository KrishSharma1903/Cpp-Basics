#include <iostream>
using namespace std;
int main()
{
    int max;
    int A[10]={1,2,3,4,5,6,7,8,9,100};
    max =A[0];
    for(int i=0;i<10;i++)
    {
        if(max<A[i])
        max=A[i];
    }
 cout<<max;
}