#include<stdio.h>
#include<conio.h>
int main()
{
     int a[20],i,old,num,flag=0,lim;
     printf("\nEnter limit  of array:\n");
     scanf("%d",&lim);
     printf("\nEnter %d array element:\n",lim);
     for(i=0; i<lim; i++)
     {
         scanf("%d",&a[i]);
     }
     printf("\nEnter old array element for updation:\n");
     scanf("%d",&old);
     printf("\nEnter new array element for updation:\n");
     scanf("%d",&num);
     for(i=0; i<lim; i++)
     {
         if(a[i]==old)
         {

             flag=1;
             break;
         }
     }
     if(flag==1)
     {
         a[i]=num;
     }
     else
     {
         printf("\nYour entered array element does not exist.\n");
     }
      if(flag==1)
      {
          printf("\nYour new array is:\n");
          for(i=0; i<lim; i++)
          {
              printf("%d\t",a[i]);
          }
      }
      getch();
      return 0;
}
