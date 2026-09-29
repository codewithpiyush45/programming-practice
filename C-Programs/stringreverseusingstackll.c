#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    struct Node* prev;
    char ch;
    struct Node* next;
};
typedef struct Node node;
node* top=NULL;
void push(char);
char pop();
int main()
{
    char a[20],rev[20];
    int i=0,j,flag;

    printf("\nEnter a string.\n");
    scanf("%s",a);

    while(a[i]!='\0')
    {
        push(a[i]);
        i++;
    }

    j=i-1;
    i=0;

    while(i<=j)
    {
        rev[i]=pop();
        i++;
    }
    rev[i]='\0';

     printf("\nReversed string: '%s'\n",rev);

     i=flag=0;

      while(a[i]!='\0')
      {

     if(a[i]!=rev[i])
     {
         flag=1;
         break;
     }
     i++;
      }

      if(flag==1)
      {
          printf("\n'%s' string is not palindrome.",a);
      }
      else
      {
          printf("\n'%s' string is palindrome.",rev);
      }


    getch();
    return 0;
}

void push(char c)
{
    node* n1;

    n1=(node *)malloc(sizeof(node));
    if(top==NULL)
    {
        n1->prev=NULL;
        top=n1;
        n1->ch=c;
        return;
    }

    else
    {
     n1->prev=top;
     top->next=n1;
     n1->ch=c;
     top=n1;

     }
     //n1->next=NULL;
}

char pop()
{
    char c;
    while(top->prev!=NULL)
    {
       c=top->ch;
       top=top->prev;
       return c;
    }
    return top->ch;
}
