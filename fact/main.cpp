#include <iostream>
#include<conio.h>

using namespace std;
int fact(double);
int main()
{
    double n;

    cout << "enter a number=";
    cin>>n;
   cout<<"the factorial of given number is==="<<fact(n);
getch();
}
int fact(double a){
if(a==1 )
    return 1;
else
    return (fact(a-1)*a);

}


