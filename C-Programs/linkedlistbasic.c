#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct node
{
    int rollno;
    char gen[10];
    float marks;
    struct node* next;   //self referencing structure
};

int main()
{
     struct node *n1,*head,*n2;

     head=(struct node*) malloc(sizeof(struct node));
      n1=(struct node*)malloc(sizeof(struct node));
      n2=(struct node*) malloc(sizeof(struct node));
    head->rollno=45;
  //  head->gen="male";
  strcpy(head->gen,"male");
    head->marks=98.62;
    head->next=n1;
    n1->rollno=18;
//    n1->gen="Female";
    n1->marks=97.77;
    n1->next=n2;
    n2->rollno=63;
//    n2->gen="male";
    n2->marks=97.11;
    n2->next=NULL;
    struct node* temp=head;

    while(temp!=NULL)
    {
        printf("\n%d ->",temp->rollno);
        printf("%s ->",temp->gen);
        printf("%f ",temp->marks);
        temp=temp->next;
    }

    return 0;
}
