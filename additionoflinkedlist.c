//Addition of two linked list :

#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
    typedef struct Node node;
    node* n1,*temp,*head=NULL,*n2,*temp1,*head1=NULL,*n3,*head3=NULL,*temp2;
    int i,n;
    printf("\nEnter Number of Nodes:\n");
    scanf("%d",&n);
    printf("\nEnter %d nodes data in 1st Linked list:\n",n);
    for(i=0; i<n; i++)
    {
        n1=(node *) malloc(sizeof(node));
        printf("\nEnter data in %d node: ",i+1);
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
    }
    printf("\nEnter %d nodes in 2nd linked list\n",n);
    for(i=0; i<n; i++)
    {
        n2=(node *)malloc(sizeof(node));
        printf("\nEnter data in %d node: ",i+1);
        scanf("%d",&n2->data);
        if(head1==NULL)
        {
            head1=n2;
            temp1=n2;
        }
        else
        {
            temp1->next=n2;
            temp1=n2;
        }
    }
    temp=head;
    temp1=head1;
     printf("\nAddition of this linked list:\n");
     while(temp!=NULL && temp1!=NULL)
     {
         n3=(node *)malloc(sizeof(node));
         n3->data=temp->data + temp1->data;
         if(head3==NULL)
         {
             head3=n3;
             temp2=n3;
         }
         else
         {
             temp2->next=n3;
             temp2=n3;
         }
         temp=temp->next;
         temp1=temp1->next;
     }

     temp2=head3;
     while(temp2!=NULL)
     {
         printf("%d\t",temp2->data);
         temp2=temp2->next;
     }


    return 0;
}
