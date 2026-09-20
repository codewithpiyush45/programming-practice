#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;
node* f=NULL,*r=NULL;
void display();
void enque(int);
void deque();
int main()
{
    int ch,ele,st=0;
    printf("\nEnter your choise.\n");
    printf("\n1.Enque.");
    printf("\n2.Deque.");
    printf("\n3.display.");

    while(st!=1)
    {
    printf("\nEnter your choise.\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nEnter a element.");
        scanf("%d",&ele);
        enque(ele);
        break;
    case 2:
        deque();
        break;
    case 3:
        display();
        break;
    case 4:
        st=1;
        break;
    default:
        printf("\nEnter valid number.\n");
        break;
    }
  }
    /*enque(11);
    enque(12);
    enque(14);
    enque(15);
    display();
    deque();
    display();*/

    getch();
    return 0;
}

int isempty()
{
    if(f==NULL && r==NULL)
    {
        return 1;
    }
    return 0;
}



void enque(int x)
{
    node* temp;
    r=(node *)malloc(sizeof(node));
    r->data=x;
    if(f==NULL)
    {
        f=r;
             temp=r;
        return;
    }
    else
    {
        temp->next=r;
        temp=r;
    }

}

void display()
{
    if(isempty()==1)
    {
        printf("\nQueue is empty.\n");
        return;
    }
    node* h=f;

    while(h<=r)
    {
        printf("%d\t",h->data);
        h=h->next;
    }
}

void deque()
{
    if(isempty()==1)
    {
        printf("\nQueue is empty.\n");
        return;
    }
    if(r==f)
    {
        printf("\nDequed element is: %d",r->data);
        r=NULL;
        f=NULL;
        return;
    }
    node* temp;
    temp=f;
    f=f->next;
    printf("\nElement dequed is: %d",temp->data);
    free(temp);
}
