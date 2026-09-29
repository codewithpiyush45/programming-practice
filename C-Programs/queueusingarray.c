#include<stdio.h>
#include<conio.h>
#define MAX 10
int queue[MAX];
int f=-1,r=-1;
int isempty();
int isfull();
void createqueue();
void enque(int);
void deque();
void display();
int main()
{
    int x,ch,st=0;

    printf("\nChoose your choise.\n");
    printf("\n1.Create queue.");
    printf("\n2.Enque.");
    printf("\n3.Deque.");
    printf("\n4.Display.\n");

    while(st!=1)
    {
        printf("\nEnter your choise.\n");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        createqueue();
        break;
    case 2:
        printf("\nEnter a element to enque.\n");
        scanf("%d",&st);
        enque(st);
        break;
    case 3:
        deque();
        break;
    case 4:
        display();
        break;
    case 5:
        st=1;
        break;
    default:
        printf("\nEnter valid choise.\n");
    }
   }
    getch();
    return 0;
}

int isempty()
{
    if(f==-1)
    {
        return 1;
    }
    return 0;
}
int isfull()
{
    if(r==MAX-1)
    {
        return 1;
    }
    return 0;
}
void createqueue()
{
    int s,i;
    if(isfull()==1)
    {
        printf("\nQueue is full now.\n");
        return;
    }
    printf("\nEnter a size of queue.\n");
    scanf("%d",&s);
    if(s>MAX)
    {
        printf("\nNot this size is queue.\n");
        printf("\nSize of queue is: %d",MAX);
        return;
    }
    else
   {
    for(i=0; i<s; i++)
    {
        int ele;
        printf("\nEnter %d element.",i+1);
        scanf("%d",&ele);
    if(f==-1 && r==-1)
    {
       f=0;
         r=f;
         queue[r]=ele;
    }

     r++;
     queue[r]=ele;
   }
  }
}
void  enque(int x)
{
   if(isfull()==1)
   {
       printf("\nQueue is full now.\n");
       return;
   }
   r++;
   queue[r]=x;
}
void deque()
{

}

void display(void)
{
   int  i=f;
   if(isempty()==1)
   {
       printf("\nOOPS! Queue is empty.\n");
       return;
   }
   while(i<=r)
   {
       printf("%d\t",queue[i]);
       i++;
   }


}
