#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int f=-1,r=-1;
void dequeue();
int isempty();
void equeue(int);
int full();
void display();
void main()
{
    int st=1,ele,ch;

    /*equeue(1);
     equeue(2);
     equeue(3);
     equeue(4);
     equeue(5);
     equeue(6);
     equeue(7);
     equeue(8);
     equeue(9);*/
     printf("\nChoose your choise.\n");
     printf("\n1.ENQUEUE");
     printf("\n2.DEQUEUE");
     printf("\n3.DISPLAY");
      printf("\n4.STOP");

      while(st!=0)
      {
          printf("\nEnter your choise\n");
          scanf("%d",&ch);

          switch(ch)
          {
          case 1:
            printf("\nEnter element to ENQUEUE\n");
            scanf("%d",&ele);
            equeue(ele);
            break;
          case 2:
            dequeue();
            break;
          case 3:
            display();
            break;
          case 4:
            st=0;
            break;
          default:
            printf("\nPlease enter valid choise\n");
          }
      }
    getch();
}

int isempty()
{
    if(r==-1)
    {
        return 1;
    }
    return 0;
}

int full()
{
    if(r==MAX-1)
    {
        return 1;
    }
    return 0;
}

void equeue(int x)
{
    if(full()==1)
    {
        printf("\nQueue is now full.\n");
        return;
    }
    else if(isempty()==1)
    {
        r++;
        queue[r]=x;
        f=r;
    printf("\nElement equeue successfully.\n");

        return;
    }
    r++;
    queue[r]=x;
    printf("\nElement equeue successfully.\n");
}
void dequeue()
{
    if(isempty()==1)
    {
        printf("\nQueue is empty.\n");
        return;
    }
    else if(r==f)
    {
        printf(" %d",queue[r]);
        r=-1;
        f=-1;
        return;
    }

    printf("\nDequeue element is: %d",queue[f]);
    f--;
}

void display()
{
    if(isempty()==1)
    {
        printf("\nQueue is empty.");
        return;
    }
    while(f<=r)
    {
        printf("%d\t",queue[f]);
        f++;
    }
}
