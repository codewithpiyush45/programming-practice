//DELETION in array:
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,del,lim;
    printf("\nEnter limit of array:\n");
    scanf("%d",&lim);
    printf("\nEnter %d array element:\n",lim);
    for(i=0; i<lim; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter element to delete from array:\n");
    scanf("%d",&del);
    for(i=0; i<lim; i++)
    {
        if(a[i]==del)
        {
            a[i]=a[i+1];
        }
    }

    printf("\nYour sorted array:\n");

    for(i=0; i<lim-1; i++)
    {
        printf("%d\t",a[i]);
    }

    getch();
    return 0;
}
