#include<stdio.h>
#include<conio.h>
int main()
{
    int    a[20],i,j,temp,lim;
    printf("\nEnter limit of array:\n");
    scanf("%d",&lim);
    printf("\nEnter %d array elements:\n",lim);
    for(i=0; i<lim; i++)
    {
        scanf("%d",&a[i]);
    }
      printf("\nYour array sorted in Acending order:\n");
      for(j=0; j<lim; j++)
      {
          for(i=0; i<lim-1; i++)
          {
              if(a[i]>a[i+1])
              {
              temp=a[i+1];
              a[i+1]=a[i];
              a[i]=temp;
              }
          }
      }
      printf("\n");
      for(i=0; i<lim; i++)
      {
          printf("%d\t",a[i]);
      }

      getch();
      return 0;
}
