#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,b[5][5],a[4][4],c[4][4];
    printf("welcome to you matrix program\n");
    printf("enter elements of first matrix\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
         printf("enter elements %d %d\n",i,j);
         scanf("%d",&a[i][j]);
     }
     printf("\n");
    }
    printf("your  first matrix is\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       printf("\t%d",a[i][j]);
     }
     printf("\n");
    }
    printf("enter elements of second matrix\n");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
          printf("enter elements %d %d\n",i,j);
         scanf("%d",&b[i][j]);
     }
     printf("\n");
    }
    printf("your  second matrix is\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {

       printf("\t%d",b[i][j]);
     }
     printf("\n");
    }
    c[i][j]=a[i][j]+b[i][j];
    printf("\n================================RESULT=====================================\n\n");
     for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       printf(1"\t%d",c[i][j]);
     }
     printf("\n");
    }
    return 0;
}
