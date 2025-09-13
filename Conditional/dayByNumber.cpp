#include <iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter day number: ";
    cin>>day;
    switch(day)
    {
    case 1: if(day==1)
        cout<<"mon";
        break;
    case 2: if(day==2)
        cout<<"tue";
        break;
    case 3: if(day==3)
        cout<<"wed";
        break;
    case 4: if(day==4)
        cout<<"thrus";
        break;
    case 5: if(day==5)
        cout<<"fri";
        break;
    case 6: if(day==6)
        cout<<"sat";
        break;
     case 7: if(day==7)
         cout<<"sun";
         break;
    default: cout<<"Invalid day";
    }
}