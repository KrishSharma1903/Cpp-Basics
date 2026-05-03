#include <iostream>
using namespace std;

template <class T>
T maxi(T x,T y)
{
 if(x>y)
 return x;
 else
 return y;
}

int main()
{
    int c= maxi(12 , 13);
    float d = maxi(12.3f , 13.4f);
cout<<c<<endl;
    cout<<d;

    return 0;
}



