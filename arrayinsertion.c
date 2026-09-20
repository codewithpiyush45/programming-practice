#include<stdio.h>
#include<conio.h>
int main()
{
      int a[100],i,element,pos,size,n;
     printf("\n Enter array limit:\n");
     scanf("%d",&n);
     printf("\nEnter %d array element:\n",n-1);
      for(i=0; i<n-1; i++)
      {
          scanf("%d",&a[i]);
      }

       printf("\nEnter  a position to insert:\n");
       scanf("%d",&pos);
      printf("\nEnter a number for insertion:\n");
      scanf("%d",&element);

      for(i=n-1; i>=pos; i--)
      {
          a[i]=a[i-1];
         // a[i+1]=a[i];
      }
      a[i]=element;
      printf("\nYour sorted array:\n");
      for(i=0; i<n; i++)
      {
          printf("%d\t",a[i]);
      }

    getch();
      return 0;
}
