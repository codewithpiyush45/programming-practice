#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    struct Stack* prev;
    int data;
    struct Stack* next;
};
typedef struct Stack node;

node* create(node* ,int);
void forward(node*);
void backward(node*);
int main()
{
      int n;
        node* head=NULL;

        printf("\nEnter number of Nodes:\n");
        scanf("%d",&n);
       head= create(head,n);
        forward(head);
        backward(head);

    return 0;
}

node* create(node* h,int num)
{
    int i;
    node* n1,*temp;
    for(i=0; i<num; i++)
    {
        n1=(node *)malloc(sizeof(node));
        printf("\nEnter data in %d node.\n",i+1);
        scanf("%d",&n1->data);
        if(h==NULL)
        {
            h=n1;
            n1->prev=NULL;
            temp=n1;
        }
        else
        {
            n1->prev=temp;
            temp->next=n1;
            temp=n1;
        }
    }
    temp->next=NULL;
    return h;
}

void forward(node* h)
{
    printf("\nLinkedlist as forward direction.\n");

    while(h!=NULL)
    {
        printf("%d ->",h->data);
        h=h->next;
    }
}

void backward(node* j)
{
    printf("\nLinkedlist as backward direction.\n");

    while(j->next!=NULL)
    {
        j=j->next;
    }
    while(j!=NULL)
    {
        printf("%d ->",j->data);
        j=j->prev;
    }
}
