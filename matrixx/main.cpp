#include <iostream>
using namespace std;
class mat
{
  public:
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
/*  void multiplication()
      {
           for(int i=1;i<=3;i++)
         {
             for(int j=1;j<=3;j++)
             {
                 for(int k=1;k<=3;k++)

          c[i][j]=a[i][j]-b[i][j];
             }
         }
      }*/
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
int main()
{
    int ch;
    char ans;
    cout<<"\n==================WELCOME TO YOU MATRIX PROGRAM====================\n";
    mat o;
    do{

    cout<<"    1.ADDITION\n";
    cout<<"    2.SUBTRACTION\n";
    cout<<"    3.MULTIPLICATION\n";
    cout<<"    4.DIVISION\n";
    cout<<"\n    ENTER YOUR CHOICE\n";
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
    cout<<"\nADDITON OF MATRIX IS\n";
    o.addition();
    o.result();
    break;
    case 2:
    cout<<"\nSUBTRACTION OF MATRIX IS\n";
    o.subtraction();
    o.result();
      break;
      /* case 3:
      cout<<"\nMULTIPLICATION OF MATRIX IS\n";
    o.multiplication();
    o.result();
       break;
        case 4:
    cout<<"\n DIVISION OF MATRIX IS\n";
    o.division();
    o.result();
       break;*/
       }
    cout<<"DO YOU WANT CONTINUE PRESS Y/y\n";
    cin>>ans;
    }while(ans=='Y' || ans=='y');

    return 0;
    }
