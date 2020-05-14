#include <iostream>
using namespace std;
 class vikas
 {
    public:
     vikas(int c,int d)
      {
    cout<<"sum is"<<(c+d);

}
~vikas()
{
    cout<<"memory is release";
}
};

int main()
{
    int a,b;
    cout<<"enter first numer";
    cin>>a;
    cout<<"enter second numer";
    cin>>b;

vikas obj(a,b);
    return 0;
}
