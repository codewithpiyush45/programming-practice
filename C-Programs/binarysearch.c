#include<stdio.h>
#include<conio.h>
int main()
{
    int m,a[20],i,l=0,r,lim,search;
    printf("\nEnter array limit:\n");
    scanf("%d",&lim);
    printf("\nEnter %d array element:\n",lim);
    r=lim;
    for(i=0; i<lim; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number you want to search:\n");
    scanf("%d",&search);
   while(l<=r)
   {
    m=(l+r)/2;
    if(a[m]==search)
    {
        printf("\nNumber is found.");
        break;
    }
    else if(a[m]>search)
    {
        r=m-1;
    }
    else if(a[m]<search)
    {
        l=m+1;
    }

   }

   if(l>r)
   {
       printf("\nNumber is not found.");
   }


    getch();
    return 0;
}
