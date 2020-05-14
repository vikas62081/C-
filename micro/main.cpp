#include <iostream>
#define SQUARE(x) x*x
using namespace std;

int main()
{
    int a=5,b;
    b=SQUARE(a+1);
    cout<<"result is "<<b;
    return 0;
}
