#include <iostream>
using namespace std;

int search(int A[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(A[i]==key){
            cout<<"Element found";
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of Elments: ";
    cin>>n;
    int *A = new int [n]; 
    for(int i=0; i<n;i++)
    {
        cin>>A[i];
    }

    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    int index=search(A,n,key);
    if(index != -1)
    cout<<"Element found at index: "<<index; 

    else
    cout<<"Element not found ";
    
    delete[] A;
    A=nullptr;

   
}

