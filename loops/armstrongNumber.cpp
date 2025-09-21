#include <iostream>
using namespace std;
int main()
{
    int n,r,m,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(m==sum)
    {
        cout<<"The number is an armstrong number.";
    }
    else 
    cout<<"The number isnt an armstrong number.";

}