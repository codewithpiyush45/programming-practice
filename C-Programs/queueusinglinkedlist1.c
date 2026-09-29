#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node*  next;
};
typedef struct Node node;
void createqueue();
int isempty();
void enque(int);
void deque();
void display();

node* f=NULL,*r=NULL,*temp;

int main()
{
    int ch,st=0,ele;

    printf("\n1.Create Queue.");
    printf("\n2.Enque.");
    printf("\n3.Deque.");
    printf("\n4.Display.");
     printf("\n5.Exist.\n");
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
        printf("\nEnter a data to enque.\n");
        scanf("%d",&ele);
        enque(ele);
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
        printf("\nEnter valid choise %d is  not exist.",ch);
    }
   }

    getch();
    return 0;
}
int isempty()
{
    if(r==NULL)
    {
        return 1;
    }
    return 0;
}

void createqueue()
{
    int lim;
    //node* temp=NULL;
    printf("\nEnter limit of Queue.\n");
    scanf("%d",&lim);
    if(lim!=0)
    {

    int x;
    for(int i=0; i<lim; i++)
    {
       r=(node *)malloc(sizeof(node));
       printf("\nEnter data in %d node.",i+1);
       scanf("%d",&x);
       r->data=x;
       //temp=r;
       if(f==NULL)
       {
           f=r;
           temp=r;
       }
       else{
          temp->next=r;
          temp=r;
       }
     }
     printf("\n%d nodes created successfully.\n",lim);
   }
   else
   {
       printf("\nEnter valid choise.\n");
   }

}

void enque(int x)
{

    r=(node *)malloc(sizeof(node));
    r->data=x;
    if(f==NULL)
    {
        temp=f=r;
    }
    else
    {
        temp->next=r;
        temp=r;
    }

    printf("\n%d data enqued successfully.\n",temp->data);
}

void deque()
{
   if(isempty()==1)
    printf("\nQueue is empty now.\n");

      else{
            if(f==r)
            {
                printf("\nDequed element is: %d",f->data);
                f=r=NULL;
                return;
            }
         printf("\nDequed element is: %d",f->data);
         node* del=f;
         f=f->next;
         free(del);

      }
}

void display()
{
    node* h=f;

   if(isempty()==1)
   {
       printf("\nQueue is empty now.\n");
       return;
   }
   while(h!=r)
   {
       printf("%d\t",h->data);
       h=h->next;
   }
   printf("%d",h->data);
}
