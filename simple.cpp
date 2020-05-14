#include<iostream>
using namespace std;
class vikas
{
	public:
		int a,chandan,sum;
		void vika()
		{
		
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>chandan;
	sum=a+chandan;
	
	cout<<"sum of given number is"<<sum;	
}
void vika(int x)
{
	cout<<"release memory";
}
};

int main()
{
vikas obj;
obj.vika();
obj.vika(5)	;
}
