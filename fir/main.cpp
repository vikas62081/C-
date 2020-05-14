#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    void funacending()
    {
    cout<<"enter size of array\n";
    cin>>n;
    cout<<"enter elements one by one\n";
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"=======RESULT=======";
    cout<<"=============ACENDING ORDER==============\n";
    for(int i=0;i<=n;i++)
    {
        cout<<"\n"<<a[i];
    }
    }
  return 0;
}

