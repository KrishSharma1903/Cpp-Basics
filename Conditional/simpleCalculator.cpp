#include <iostream>
using namespace std;

int main()
{
    int choice;
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"1. ADD"<<endl<<"2. SUBTRACT"<<endl<<"3. MULTIPLY"<<endl<<"4. DIVIDE"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

   /* if(choice==1)
        cout<<a+b;
    if(choice==2)
        cout<<a-b;
    if(choice==3)
        cout<<a*b;
    if(choice==4)
        cout<<a/b;*/
        
//using switch
switch (choice)
{
case 1: cout<<a+b;
    break;
case 2: cout<<a-b;
    break;
case 3: cout<<a*b;
    break;
case 4: cout<<a/b;
    break;

default: cout<<"invalid choice";
    break;
}

}