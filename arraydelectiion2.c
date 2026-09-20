#include<stdio.h>
#include<conio.h>

int main()
{
   int    a[5],i,num;
    printf("\nEnter 5 array elements:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter number to delete:\n");
    scanf("%d",&num);
    for(i=0; i<5; i++)
    {
        if(a[i]==num)
        {
            for(i=i; i<5; i++)
            {
              a[i]=a[i+1];
              break;
            }
        }
    }
    a[i]=-1;
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
    return 0;
}
