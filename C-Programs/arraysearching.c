#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,lim,flag=0,search;
    printf("\nEnter array limit: \n");
    scanf("%d",&lim);
    printf("\nEnter %d array element:\n",lim);
    for(i=0; i<lim; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("\nEnnter number you want to search:\n");
     scanf("%d",&search);

     for(i=0; i<lim; i++)
     {
         if(a[i]==search)
         {
             flag=1;
             break;
         }
     }
     if(flag==1)
     {
         printf("\nNumber is found. At index %d",i+1);
     }
     else
     {
         printf("\nNumber is not found.");
     }


    getch();
    return 0;
}
