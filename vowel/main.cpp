#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int vowel=0,i,length;
    char name[199];

    cout << "enter a string"<< endl;
    cin>>name;
    length=strlen(name);
    for(i=0;i<length;i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            vowel=vowel+1;
        }
    }
    cout<<"number of vowel is "<<vowel;
    return 0;
}
