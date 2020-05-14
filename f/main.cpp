#include <iostream>
using namespace std;
int main()
{
    int fact,n,result=0,rem;
    cout << "enter a number" << endl;
    cin>>n;
    int news=n;
    while(n!=0)
    {
       rem=n%10;
       n=n/10;
       fact=1;
       for(int i=1;i<=rem;i++)
       {
           fact=fact*i;
       }
       result=result+fact;

    }
    if(news==result)
    {
        cout<<"krishnamurthi number";
    }else
    {
        cout<<"not krishnamurthi number ";
    }
    return 0;
}
