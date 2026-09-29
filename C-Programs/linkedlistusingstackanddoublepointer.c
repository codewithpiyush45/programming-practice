#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int data;
    struct Stack* next;
};
typedef struct Stack stack;
void push(stack**);
void pop(stack**);
void display(stack**);
int main()
{
    stack *top=NULL;
    int st=0,ch;

    printf("\nChoose your choise:\n");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. DISPLAY");
    printf("\n4. End\n");

    while(st!=1)
    {
        printf("\nEnter your choise:\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
             push(&top);
            break;
        case 2:
             pop(&top);
            break;
        case 3:
             display(&top);
            break;

        case 4:
            st=1;
            break;
        default:
            printf("\nEnter valid choise %d is not exist in this list:",ch);
        }
    }

    return 0;
}

void push(stack** s)
{
      stack* n1;
      n1=(stack *) malloc(sizeof(stack));
      printf("\nEnter data in node:\n");
      scanf("%d",&n1->data);
      n1->next=*s;
      *s=n1;
      printf("\nNode Pushed successfully.\n");
}

void pop(stack** del)
{
    if(*del==NULL)
    {
        printf("\nList is empty.\n");
        return ;
    }
     stack* j;
     j=*del;
     *del=(*del)->next;
     free(j);
     printf("\nNode Poped successfully.\n");

}

void display(stack** p)
{
    if(*p==NULL)
    {
        printf("\nList is empty.\n");
        return;
    }

    printf("\nYour linked list:\n");
    while(*p!=NULL)
    {
        printf("%d ->", (*p)->data);
        *p=(*p)->next;
    }
}
