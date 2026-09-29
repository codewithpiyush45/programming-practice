#include<stdio.h>
#include<conio.h>
int main ()
{
  int a[100],i,pos,lim,num;
  printf("\nEnter array limit: \n");
  scanf("%d",&lim);
  printf("\nEnter %d array element:\n",lim-1);
  for(i=0; i<lim-1; i++)
  {
      scanf("%d",&a[i]);
  }
  printf("\nEnter element to insert in array:\n");
  scanf("%d",&num);
  printf("\nEnter position of array:\n");
  scanf("%d",&pos);
  for(i=lim; i>=pos; i--)
  {
      a[i]=a[i-1];
  }
  a[i]=num;
  printf("\nYour inserted array:\n");
  for(i=0; i<lim; i++)
  {
      printf("%d\t",a[i]);
  }

  getch();
  return 0;
}
