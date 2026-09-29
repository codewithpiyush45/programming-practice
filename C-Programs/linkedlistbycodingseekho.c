//Linked list
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
struct Node* createnode()
{
    struct Node* h1;
   h1= (struct Node *)malloc(sizeof(struct Node));
   printf("\nEnter a data:\n");
   scanf("%d",&h1->data);
   h1->next=NULL;
   return h1;
}
void insertstart()
{
    struct Node* k1=NULL;
   k1=createnode();
   if(head==0)
   {
       head=k1;
   }
   else
   {
        k1->next=head;
        head=k1;
   }
}
 void insertend()
{

}
void insertmiddle()
{

}
void display()
{
    struct Node* d;
    d=head;
    while(d!=NULL)
    {
        printf("%d\t",d->data);
        d=d->next;

    }

}
int main()
{
    int ch;
    typedef struct Node node;
    printf("\n1.Insertion from start:\n");
    printf("\n2.Insertion from end:\n");
    printf("\n3.Insertion from middle:\n");
    printf("\n4.Display Linked list:\n");
    printf("\n5.For exist from linked list: \n");
    while(1)
    {
    printf("\n\n\tEnter your choise: \n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {
            insertstart();
            break;
        }
    case 2:
        {
            insertend();
            break;
        }
    case 3:
        {
            insertmiddle();
            break;
        }
    case 4:
        {
            display();
            break;
        }
    case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            printf("\nIncorrect Choise: ");
        }

    }

    }
    getch();
    return 0;
}
