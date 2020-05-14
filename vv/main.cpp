#include <iostream>
using namespace std;
add(int a=10,int b=20)
{
    return(a+b);
}
int main()
{
    int x=3,y=7,z;
    z=add(x,y);
    cout<<"\naddition="<<z;
    z=add(x);
    cout<<"\naddition="<<z;
    z=add();
    cout<<"\naddition="<<z;
    return 0;
}
