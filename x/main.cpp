#include <iostream>

using namespace std;

int main()
{
    string date="1/1/1111",hall="gims",select="10:11";
    int number_count=0;
    if(hall=="gims" && date=="1/1/1111")
    {
        if(select=="full")
        {
            if(number_count>0)
            {
                cout<<"Full is already";
            }
            else{
                cout<<"Insertion of full";
            }
        }
        if(select=="10:11")
        {
            if(number_count>0)
            {
                cout<<"10:11 is already";
            }
            else{
                cout<<"Insertion of 10:11";
            }
        }
    }

    return 0;
}
