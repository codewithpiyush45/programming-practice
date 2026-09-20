#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
void link1(struct Node* ,int);
void link2(struct Node* ,int);
int main()
{
    typedef struct Node node;
    node *n1,*temp1,*head1=NULL,*h2=NULL,*temp2;
    int n;
    printf("\nEnter Number of Nodes:\n");
    scanf("%d",&n);

    n1=(node *) malloc(sizeof(node));
    head1=n1;
    list1(head1,n);

    return 0;
}
void list1(struct Node* h1,int size1)
{
    struct Node* h;
    h=h1;
    int i;
    for(i=0; i<size1; i++)
    {
        h=(node *)malloc(sizeof(node));
        printf("\nEnter data in %d node",i+1);
        scanf("%d",&h->data);
        if(h1==NULL)
        {
           h=h1;
           temp1=NULL;
        }
        else
        {
            h->next=h;
            temp1=h;
        }
    }

}
