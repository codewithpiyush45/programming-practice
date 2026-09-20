#include<stdio.h>
#include<conio.h>
void binarysearch(int a[],int search,int size);
int main()
{
    int a[100],i,size,ser;
    printf("\nEnter array size:\n");
    scanf("%d",&size);
    printf("\nEnter %d array element:\n",size-1);
    for(i=0; i<size-1; i++)
    {
        scanf("%d",&a[i]);
    }


    getch();
    return 0;
}
