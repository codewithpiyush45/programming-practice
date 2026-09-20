#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],p,s,temp,min,lim,index;
    printf("\nEnter limit of array:\n");
    scanf("%d",&lim);
    printf("\nEnter %d array elements:\n",lim);
    for(p=0; p<lim; p++)
    {
        scanf("%d",&a[p]);
    }

      for(p=0; p<lim-1; p++)
      {
          min=a[p];
          index=p;
          for(s=p+1; s<lim; s++)
          {
              if(min > a[s])
              {
                  /*min=a[s];
                  index=s;*/

              }
          }

       /*     temp=a[p];
          a[p]=a[index];
          a[index]=temp;

         */

      }
      printf("\nAfter sorted array:\n");
      for(p=0; p<lim; p++)
      {
          printf("%d\t",a[p]);
      }


    return 0;
}
