#include <iostream>
using namespace std;
int main()
{
    int h,l,mid,key;
    cout<<"Enter a key";
    cin>>key;
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    h=9;
    l=0;
    while (l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
        {
            cout<<"Found at mid"<<mid;
            return 0;
        }
        else if(key>A[mid])
        {
            l=mid+1;
        }
        else
        h=mid-1;
    }
    cout<<"not found";
    
} 