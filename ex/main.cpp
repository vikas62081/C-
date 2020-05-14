#include <iostream>

using namespace std;
int fact(int);
int main()
{
    int n;

    cout << "enter a number";
    cin>>n;
   cout<<"the factorial of given number is"<<fact(n);
}
int fact(int a){
if(a==1 )
    return 1;
else
    return (fact(a-1)*a);

}
