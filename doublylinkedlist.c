#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
int main()
{
    typedef struct Node node;
    node *head,*temp,*n1;
    int n,i;

    printf("\nEnter number of nodes:\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        n1=(node *) malloc(sizeof(node));
        printf("\nEnter data in  %d node:\n",i+1);
        scanf("%d",&n1->data);

        if(head==NULL)
        {
            head=n1;
            temp=n1;
        }
        else
        {
            temp->next=n1;
            n1->next=NULL;
            n1->prev=temp;
            temp=n1;
        }
    }

    //n1->next=NULL;
    //temp=head;

    while(temp!=head)
    {
        temp=temp->prev;
    }
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }

    getch();
    return 0;
}
