#include <iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"enter no of elements:";
    int n,i,sum=0;
    cin>>n;
    vector<int> arr;
    arr.resize(n);

    for(i=0;i<=arr.size();i++)
    {
        arr[i]=i;
        sum=sum+arr[i];
    }
    cout<<"sum is"<<sum;
    return 0;
}
