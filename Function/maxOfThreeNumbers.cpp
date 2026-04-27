#include <iostream>
using namespace std;

int MOT(int x,int y, int z)
{
    if(x>y && x>z)
    cout<<x<< " is the greatest.";
    else if (y>x && y>z)
    cout<<y <<" is the greatest.";
    else 
    cout<<z<<" is the greatest ";
}

int main()
{
    int a,b,c;
    cout<<"Enter any 3 numbers: ";
    cin>>a>>b>>c;
    MOT(a,b,c);
}