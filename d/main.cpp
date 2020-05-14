#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int sum=0;
    cout << "enter the size of elements";
    int n;
    cin>>n;
     vector<int> arr;
    arr.resize(n);
    for(int i=0;i<arr.size();i++)
    {
        arr[i]=i;
        sum=sum+arr[i];
    }
    cout<<"sum is"<<sum;
    return 0;
}
