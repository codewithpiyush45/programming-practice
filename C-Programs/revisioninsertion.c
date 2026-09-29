#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,j,temp,n;

    printf("\nEnter size of array:\n");
    scanf("%d",&n);
    printf("\nEnter %d array elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i++)
    {
        for(j=i; j>=0; j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("\nSorted array is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    getch();
    return 0;
}
