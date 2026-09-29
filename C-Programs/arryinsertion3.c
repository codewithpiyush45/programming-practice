#include<stdio.h>
#include<conio.h>
void insertion(int a[],int lim,int ser)
{
     int pos,i;
    printf("\nEnter position of insertion:\n");
    scanf("%d",&pos);
    for(i=lim; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[i]=ser;
    printf("\nyour New array:\n");
    for(i=0; i<lim; i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[100],i,size,ins;
    printf("\nEnter size of array:\n");
    scanf("%d",&size);
    printf("\nEnter %d array element:\n",size-1);
    for(i=0; i<size-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter array element you want to insert:\n");
    scanf("%d",&ins);
    insertion(a,size,ins);


    getch();
    return 0;
}

