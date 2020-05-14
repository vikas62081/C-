#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class first_choice
{ public:
    first_choice()
    {
    cout<<"\n1.ARITHMETIC OPERATION\n";
    cout<<"\n2.FIND THE FACTORIAL OF NUMBER\n";
    cout<<"\n3.SUM OF 1st N NUMBER\n";
    cout<<"\n4.SUM OF DIGIT OF GIVEN NUMBER\n";
    cout<<"\n5.SUM OF ARRAY ELEMENTS \n";
    cout<<"\n6.SUM OF 1st N ODD OR EVEN NUMBER\n";
    cout<<"\n7.CHECK GIVEN NUMBER IS POLINDROME OR NOT\n";
    cout<<"\n8.CHECK GIVEN NUMBER IS KRISHNAMURTHI NUMBER OR NOT\n";
    cout<<"\n9.CHECK GIVEN NUMBER IS PRIME OR NOT\n";
    cout<<"\n10.MATRIX OPERATION\n";
    cout<<"\n11.ACENDING ORDER\n";
    cout<<"\n12.DECENDING ORDER\n";
    }
};
class arith
{public:
        int a,b,ach;
    void ari()
    {

        cout<<"=============WELCOME TO YOU ARITHMETIC OPERATION=============\n";
        cout<<"\n1.ADDITION\n";
        cout<<"\n2.SUBTRACTION\n";
        cout<<"\n3.MULTIPLICATION\n";
        cout<<"\n4.DIVISION\n";
        cout<<"\nENTER YOUR CHIOCE\n";
        cin>>ach;
        cout<<"\nenter first number\n";
        cin>>a;
        cout<<"\nenter second number\n";
        cin>>b;
    switch(ach)
    {
    case 1:
        cout<<"ADDITION IS\n"<<(a+b);
        break;
        case 2:
        cout<<"SUBTRACTION IS\n"<<(a-b);
        break;
        case 3:
        cout<<"MULTIPLICATION IS\n"<<(a*b);
        break;
        case 4:
        cout<<"DIVISION IS\n"<<(a/b);
        break;
        default:
    cout<<"\nPLEASE ENTER VALID CHOICE\n";
      break;
    }
    }
};
class factorial
{public:
    int n,fact=1;
   void factor()
    {
    cout<<"\n============WELCOME TO YOU FACTORIAL PROGRAM============\n";
    cout<<"\nenter a number\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"\nfactorial is\n"<<fact;
    }
};
class sum
{public:
     int n,sum=0;
   void sametion()
    {
    cout<<"\n============WELCOME TO YOU SUM OF 1st N NUMBER PROGRAM============\n";
    cout<<"\nenter a number\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"\nSUM OF 1st "<<n<<" NUMBER IS\n"<<sum;
    }

};
class sumofdigit
{public:
      int n,sum=0,rev;
    void sumofd()
    {


    {
    cout<<"\n============WELCOME TO YOU SUM OF DIGIT PROGRAM============\n";
    cout<<"\nenter a number\n";
    cin>>n;
    while(n!=0)
    {
        rev=n%10;
      sum=sum+rev;
      n=n/10;
    }
    cout<<"\nSUM OF  DIGIT OF IS\n"<<sum;
    }

    }
};
class sumarray
{public:
int n,a[100],sum=0;
    void sumofarray()
    {
            cout<<"\n============WELCOME TO YOU SUM OF ARRAY ELEMENTS PROGRAM============\n";
        cout<<"enter size of array\n";
        cin>>n;
        cout<<"enter elements one by one\n";
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        cout<<"\nSUM OF GIVEN ARRAY ELEMENTS IS\n"<<sum;
    }
};
class oddd
{public:
  int n,even=0,odd=0;
    void evenn()
    {
         cout<<"\n============WELCOME TO YOU SUM OF 1st N ODD AND EVEN NUMBER PROGRAM============\n";
         cout<<"enter a number\n";
         cin>>n;
         for(int i=0;i<=n;i++)
         {
         if(i%2==0)
         {
             even=even+i;
         }
         else
         {
            odd=odd+i;
         }
    }
    cout<<"\nSUM OF ODD NUMBER IS\n"<<odd;
    cout<<"\nSUM OF EVEN NUMBER IS\n"<<even;
    }
};
class polindrome
{public:
    int sum=0,n;
    void funpolindrome()
    {
         cout<<"\n============WELCOME TO YOU CHECK GIVEN NUMBER IS POLINDROME PROGRAM============\n";
         cout<<"enter a number\n";
         cin>>n;
        int temp=n;
          while(n!=0)
    {
       int rev=n%10;
      sum=sum*10+rev;
      n=n/10;
    }
    if(temp==sum)
    {
        cout<<temp<<" IS POLINDROME NUMBER";
    }else{
        cout<<temp<<" IS NOT POLINDROME NUMBER";
    }
    }
};
class krishna
{public:
    int n,sum=0,rev;
    void funkrishna()
    {
         cout<<"\n=======WELCOME TO YOU CHECK GIVEN NUMBER IS KRISHNAMURTHI NUMBER OR NOT PROGRAM=======\n";
         cout<<"enter a number\n";
         cin>>n;
         int temp=n;
         while(n!=0){
                 rev=n%10;
          int fact=1;
         for(int i=1;i<=rev;i++)
         {

            fact=fact*i;
         }
         sum=sum+fact;
         n=n/10;
         }
         if(sum==temp)
         {
             cout<<sum<<" IS KRISHNAMURTHI NUMBER";
         }else
         {
             cout<<sum<<" IS NOT KRISHNAMURTHI NUMBER";
         }
         sum=0;
    }
};
class prime
{public:
    int n,sum=0;
    void funprime()
    {
	cout<<"enter a number\n";
	cin>>n;
	for(int i=2; i<n-1; i++) {

		if(n%i==0)
			sum=1;
	}
	if(sum==1)
		cout<<n<<" IS NOT PRIME NUMBER\n";
	else
		cout<<n<<" IS PRIME NUMBER\n";
    }
};
class mat
{public:
      int a[10][10],b[10][10],c[10][10];
      void inputa()
      {
         for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
                cout<<"enter element "<<i<<" "<<j<<" of matrix\n";
                 cin>>a[i][j];
             }
         }

      }
      void inputb()
      {
         for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
                 cout<<"enter element "<<i<<" "<<j<<" of matrix\n";
                 cin>>b[i][j];
             }
         }

      }
       void displaya()
      {
         for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
                  cout<<a[i][j];
                  cout<<"\t";
             }
             cout<<"\n";
         }

      }    void displayb()
      {
         for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
                  cout<<b[i][j];
                  cout<<"\t";
             }
             cout<<"\n";
         }

      }
      void addition()
      {
           for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
          c[i][j]=a[i][j]+b[i][j];
             }
         }
      }
       void subtraction()
      {
           for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
          c[i][j]=a[i][j]-b[i][j];
             }
         }
      }
       void multiplication()
      {
           for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
           c[i][j] = 0;
                for (int k = 1; k <=3; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
             }
         }
      }
      void result()
      {
          for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
                  cout<<c[i][j];
                  cout<<"\t";
             }
             cout<<"\n";
         }

      }
};
class acending
{
public:
    int n,a[100];
    void funacending()
    {
        cout<<"\n============WELCOME TO YOU ACENDING ORDER PROGRAM============\n";
    cout<<"enter size of array\n";
    cin>>n;
    cout<<"enter elements one by one\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\n=====================RESULT=====================\n";
    cout<<"\n=============ACENDING ORDER==============\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    }
};
class decending
{public:

    int n,a[100];
    void fundecending()
    {
        cout<<"\n============WELCOME TO YOU DECENDING ORDER PROGRAM============\n";
    cout<<"enter size of array\n";
    cin>>n;
    cout<<"enter elements one by one\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\n=====================RESULT=====================\n";
    cout<<"\n=============DECENDING ORDER==============\n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    }
};
int main()
{
     cout << "\n==============================WELCOME TO YOU==============================\n";
    int firstch;
    char ans;
    arith oarith;
    factorial ofactorial;
    sum osum;
     sumofdigit osumofdigit;
     sumarray osumarray;
     oddd ooddd;
     polindrome opolindrome;
     krishna okrishna;
     prime oprime;
     mat o;
     acending oacending;
     decending odecending;
    do{
   first_choice ofirst_choice;
   cout<<"=============ENTER YOUR CHOICE=============\n";
   cin>>firstch;
   switch(firstch)
   {
   case 1:
       oarith.ari();
        break;
   case 2:
       ofactorial.factor();
break;
   case 3:
    osum.sametion();
    break;
   case 4:
    osumofdigit.sumofd();
    break;
    case 5:
   osumarray.sumofarray();
    break;
    case 6:
    ooddd.evenn();
    break;
    case 7:
    opolindrome.funpolindrome();
    break;
    case 8:
        okrishna.funkrishna();
        break;
    case 9:
        oprime.funprime();
        break;
    case 10:
         int ch;
    char ans;
    cout<<"\n==================WELCOME TO YOU MATRIX PROGRAM====================\n";
    cout<<"    1.ADDITION\n";
    cout<<"    2.SUBTRACTION\n";
    cout<<"    3.MULTIPLICATION\n";
    cout<<"\n=============ENTER YOUR CHOICE=============\n";
    cin>>ch;
    cout<<"\n ENTER YOUR FIRST MATRIX\n";
    o.inputa();
    cout<<"\n============FIRST MATRIX IS==============\n";
    o.displaya();
    cout<<"\n ENTER YOUR SECOND MATRIX\n";
    o.inputb();
    cout<<"\n============SECOND MATRIX IS==============\n";
    o.displayb();
    switch(ch){
        case 1:
    cout<<"\n======ADDITON OF MATRIX IS======\n";
    o.addition();
    o.result();
    break;
    case 2:
    cout<<"\n======SUBTRACTION OF MATRIX IS======\n";
    o.subtraction();
    o.result();
      break;
    case 3:
        cout<<"\n======MULTIPLICATION OF MATRIX IS======\n";
        o.multiplication();
        o.result();
        break;
      default:
            cout<<"\nPLEASE ENTER VALID CHOICE\n";
            break;
    }
    break;
    case 11:
        oacending.funacending();
        break;
    case 12:
        odecending.fundecending();
        break;
default:
            cout<<"\nPLEASE ENTER VALID CHOICE\n";
            break;
   }
   cout<<"\n======DO YOU WANT CONTINUE======\n";
   cin>>ans;
   }while(ans=='y'||ans=='Y');
   getch();
    return 0;
}
