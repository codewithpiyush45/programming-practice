#include<stdlib.h>
#include<stdio.h>
struct Node
{
    int rollno;
    float marks;
    struct Node* next;

};
int main()
{
   typedef struct Node node;
    node *n1,*head;
    n1=(node *) malloc(sizeof(node));
    n1->rollno=1;
    n1->marks=98.77;
    head=n1;
    n1->next=NULL;

    n1=(node *) malloc(sizeof(node));
    head->next=n1;
    n1->marks=98.66;
    n1->rollno=2;
    n1->next=NULL;

    n1=(node *) malloc(sizeof(node));
    (head->next)->next=n1;
    n1->marks=96.54;
    n1->rollno=3;
    n1->next=NULL;

    n1=(node *) malloc(sizeof(node));
    (head->next)->next->next=n1;
    n1->marks=95.53;
    n1->rollno=4;
    n1->next=NULL;

    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Rollno:-%d -> Marks:-%f \n",temp->rollno,temp->marks);
        temp=temp->next;
    }

    return 0;
}
