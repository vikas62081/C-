#include <iostream>
#include<conio.h>
using namespace std;
class vikas{
public:
    string a,b,c,d;
    vikas(){


    cout<<"\nenter your first name:-";
    cin>>a;
    cout<<"\nenter your middle name:-";
    cin>>b;
    cout<<"\nenter your last name:-";
    cin>>c;
    cout<<"\nyour full name is   -:"<<a<<" "<<b<<" "<<c;}
};
int main()
{
    int n;
    cout <<"enter a number:-";
    cin>>n;
    cout<<"your number is:-"<<n;
    vikas s;
    getch();
    return 0;
}
