#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,index,min,lim,temp;
    printf("\nEnter limit of array:\n");
    scanf("%d",&lim);
    printf("\nEnter %d array elements:\n",lim);
    for(i=0; i<lim; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<lim; i++)
    {
        min=a[i];

        for(j=i+1; j<lim; j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=min;
        a[index]=temp;
    }
    printf("\nSorted array is:\n");
    for(i=0; i<lim; i++)
    {
        printf("%d\t",a[i]);
    }


    getch();
    return 0;
}
