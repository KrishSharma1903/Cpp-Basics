#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int A[4]={10,20,30,30};
    for(int i =0; i<4;i++)
    {
        sum=sum+A[i];
    }
    cout<<sum;
}