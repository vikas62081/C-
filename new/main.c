#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
    int n,a[100],i,sum=0,creadit=0;
    printf("enter the size of your array");
    scanf("%d",&n);
    printf("enter elements one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        creadit++;
    }
    printf("your entered elements are=\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\naverage of given number is");
    printf("%d",(sum/creadit));
    getch();
    return 0;
}
