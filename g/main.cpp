 #include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    char name[12];
    static char news[56];
    cout<<"\nenter number of digit of your password";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\nenter  "<<i+1<<"  digit of your password";
       cin>>name[i];

        news[i]= news[i]+name[i];
    }
    string r="vikas";

    if(news==r)
    {
        cout<<"\nlog in successful    ";
    }
    else
    {

        cout<<"\nlog in failed";
    }
    return 0;
}
