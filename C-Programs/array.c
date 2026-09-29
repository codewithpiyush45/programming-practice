#include<stdio.h>
#include<conio.h>
int main()
{
   int a[100],i,n;
   printf("\nEnter size of array:\n");
   scanf("%d",&n);
   printf("\nEnter %d array element:\n",n);

   for(i=0; i<n; i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\nYour array element:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    getch();
    return 0;
}
