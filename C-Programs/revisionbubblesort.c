#include<stdio.h>
int main()
{
    int a[20],i,k,s,j,temp,n;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    printf("\nEnter %d array elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        for(k=0; k>n; k++)
        {
            printf("%d\t",a[k]);
        }
        printf("\n");
    }

    printf("\nSorted array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
