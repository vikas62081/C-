 #include <iostream>
#include<conio.h>
using namespace std;

class vikas{
public:
     string pass1,pass2;
    int a,b;
    void pass()
    {
        cout<<"\nenter first password---";
      cin>>pass1;
      cout<<"\nenter second password---";
      cin>>pass2;
    }
    void condition()
    {
         if(pass1=="vikas" &&pass2=="kumar")
      {
          cout<<"------------LOGIN SUCCESSFULL------------";
        add();
      }
      else if(pass1=="vikas")
      {
          cout<<"\n your first password is correct";

      }
      else if(pass2=="kumar")
      {
          cout<<"\n your second password is correct";
      }
      else
        cout<<"\nBoth password is wrong";
    }
void add()
{
int ch;
 cout<<"\nenter two number---";
    cin>>a>>b;
cout<<"\n1.addition";
cout<<"\n2.subtraction";
cout<<"\n3.multiplication";
cout<<"\n4.division";
cout<<"\nenter your chioce ";
cin>>ch;
int c;
switch(ch)
{
case 1:
  c=a+b;
    cout<<"\nyour result is=="<<c;
break;
case 2:
  c=a-b;
    cout<<"\nyour result is=="<<c;
break;
case 3:
  c=a*b;
    cout<<"\nyour result is=="<<c;
break;
case 4:
  c=a/b;
    cout<<"\nyour result is=="<<c;
break;
default:
cout<<"\nplease enter valid choice:";
}


}
};
int main()
{
    char ans;
    int count=0;
    cout<<"\n       ================WELCOME==========TO==========YOU===============";

    do{
      count++;
      vikas obj;
      obj.pass();
      obj.condition();
    if(count==3)
{
    cout<<"\n ____________________     ____         _________________________";
        cout<<"\n*____________________SORRY____TRY AGAIN_________________________*";
        cout<<"\n YOU HAD LOOSE YOUR ALL CHANCE";
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";
        break;
    }
    cout<<"\n------------------------------------";
    cout<<"\nDO YOU WANT CONTINUE PRESS 'Y'";
    cin>>ans;
    } while(ans=='y' || ans=='Y');
getch();
    return 0;
}
