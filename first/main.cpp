#include <iostream>
using namespace std;
class add
{
    public:
    add()
    {
    int a,b;
   cout << "enter two no" << endl;
    cin>>a>>b;
    cout<<"sum of given no is"<<(a+b);
    }
};
int main()
{
    add obj;
    return 0;
}
