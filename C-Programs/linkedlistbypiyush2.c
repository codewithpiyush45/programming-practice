#include<stdio.h>
#include<conio.h>
struct Node
{
    int data;
    struct Node* next;
};typedef struct Node node;
node * head=NULL;
node* creationlist();
void insertatbegin();
void insertatend();
void insertatmiddle();
void deletionatbegin();
void deletionatend();
void deletionatmiddle();
void display();

void main()
{
    int i,ch;

    clrscr();

    printf("\n1. Insert at begin");
    printf("\n2. Insert at middle");
    printf("\n3. Isert at end");
    printf("\n4. Deletion at begin");
    printf("\n5. Deletion at middle");
    printf("\n6. Deletion at end");
    printf("\n7. Display");
    printf("\n8. Stop");

    while(1)
    {
        printf("\n\nEnter Your choise:\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            insertatbegin();
            break;

        case 2:
            insetatmiddle();
            break;

        case 3:
            insertatend();
            break;

        case 7:
            display();
            break;

        case 8:
            getch();
            return 0;

        default:
            {
                printf("\nEnter correct Choise");
            }
        }
    }

    getch();
}

node* creationlist()
{
    node *n1;
    n1=(node *)malloc(sizeof(node));
    printf("\nEnter data in node:\n");
    scanf("%d",&n1->data);

    if(head==NULL)
    {
        head=n1;
        temp=n1;
    }
    else
    {
        temp->next=n1;
        temp=n1;
    }
    temp->next=NULL;

    return head;
}
void insertatbegin()
{
    node* n,p;
    n=creationlist();

    p=n;

    head=head->next;
    p->next=NULL;
    free(p);
}
void insertatend()
{

}
void insertatmiddle()
{

}
void deletionatbegin()
{

}
void deletionatend()
{

}
void deletionatmiddle()
{

}
void display()
{
    node* h;
    h=head;
    if(h==NULL)
    {
        printf("\n")
    }

}
