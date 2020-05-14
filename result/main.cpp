#include <iostream>
using namespace std;
int main()
{
    int eng,math,sst,hindi,sci,total;
    cout <<"\nwelcome";
    cout<<"\nenter your english marks  ";
    cin>>eng;
    cout<<"\nenter your math marks  ";
    cin>>math;
    cout<<"\nenter your sst marks  ";
    cin>>sst;
    cout<<"\nenter your hindi marks  ";
    cin>>hindi;
    cout<<"\nenter your science marks  ";
    cin>>sci;
    total=eng+math+sst+hindi+sci;
    cout<<"\n total marks is==="<<total;
    if(total>=300)
    {
        cout<<"\nfirst devidion ";
    }
    else if(total>=225 && total<300)
    {
        cout<<"\nsecond devision";
    }
    else if(total>=180 && total<225){
        cout<<"\nthird devision";
    }
    else{
        cout<<"\nfailed";
    }
    return 0;
}
