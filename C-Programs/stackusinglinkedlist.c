#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;
node* top=NULL;
int isempty();
void push();
void pop(node*);
void display(node*);
void main()
{
    int ch,st=1;
        printf("\n\n Choose your choise:\n");

    printf("\n1. PUSH");
    printf("\n2. POP");
     printf("\n3. Display");
     printf("\n4. Exist\n");
    while(st!=0)
    {
        printf("\nEnter your choise:\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop( top);
            break;
        case 4:
            st=0;
            break;
        case 3:
            display( top);
            break;
        default:
            printf("\nEnter valid choise %d not exist",ch);
        }
    }

    getch();
}

int isempty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void push()
{
    node* newnode;
    newnode=(node *)malloc(sizeof(node));

  printf("\nEnter data in node:\n");
  scanf("%d",&newnode->data);
  newnode->next=top;
    top=newnode;
    printf("\nNode is created successfully.");
}

void pop(node* h)
{
    if(h==NULL)
    {
        printf("\nStack is empty.\n");
        return;
    }
    node* del;
    del=top;
    top=top->next;
    free(del);
    printf("\nNode deleted successfully.");
}
void display(node* h)
{
    node* j=h;
    if(j==NULL)
    {
        printf("\nStack is empty.");
        return ;
    }

              printf("\nYour Linked list:\n");

    while(j!=NULL)
    {
        printf("-> %d ",j->data);
        j=j->next;
    }
}
