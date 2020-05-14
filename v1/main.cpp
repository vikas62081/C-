#include <iostream>

using namespace std;
void fun(int x=10,int y=20)
{
    cout<<x<<":"<<y<<"\n";
}
int main()
{
    int a=5,b=15;
fun();
fun(a);
fun(a,b);
    return 0;
}
