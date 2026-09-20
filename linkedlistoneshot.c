#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
struct Node* creation()
{
    struct Node* h1;
    h1=(struct Node *) malloc(sizeof(struct Node));
    printf("\nEnter data:\n");
    scanf("%d",&h1->data);

    return h1;

}
struct Node* insertatbegin()
{
    struct Node* k1;
    k1=creation();
    if(head==NULL)
    {
        head=k1;
        k1->next=NULL;
    }
    else
    {
        k1->next=head;
        head=k1;
    }
}
void insertatmiddle()
{

}
void insertatend()
{

}
void deletionatbegin()
{
    struct Node* p=head;
    if(head==NULL)
    {
        printf("\nOOPS!List does not exist:\n");
    }
    else
    {
        head=head->next;
    }
    free(p);


}
void deletionatmiddle()
{

}
void deletionatend()
{

}


void dispaly()
{
    struct Node* h;
    h=head;

    while(h!=NULL)
    {
        printf("%d -> ",h->data);
        h=h->next;
    }
}
void main()
{
    int n,i;

    printf("\n1.Insertion at begin:");
    printf("\n2.Insertion at middle");
    printf("\n3.Insertion at end");
    printf("\n4.Delection at begin");
    printf("\n5.Deletion at middle");
    printf("\n6.Deletion at end");
    printf("\n7.Display");
    printf("\n8.Stop");

      while(1)
      {

    printf("\n\nEnter your choise");
      scanf("%d",&n);

    switch(n)
    {

    case 1:
        {
            insertatbegin();
            break;
        }
    case 2:
        {
            insertatmiddle();
            break;
        }
    case 3:
        {
            insertatend();
            break;
        }
    case 4:
        {
            deletionatbegin();
            break;
        }
    case 5:
        {
            deletionatmiddle();
            break;
        }
    case 6:
        {
            deletionatend();
            break;
        }
    case 7:
        {
            dispaly();
            break;
        }
    case 8:
        {
            exit(0);
            break;
        }
    default:
        {
            printf("\nInvalid,choise:");
        }

    }

      }
}
