#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* delectionfromstart(struct Node* ,int );
int main()
{
  typedef struct Node node;
  node* head=NULL,*n1,*temp,*delstart;
  int i,n;
  printf("\nEnter number of node: \n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
      n1=(node *) malloc(sizeof(node));
      printf("\nEnter data in %d node: ",i+1);
      scanf("%d",&n1->data);
      if(head==NULL)
      {
          head=n1;
          n1->next=NULL;
          temp=n1;
      }
      else
      {
          temp->next=n1;
          temp=n1;
      }

  }

  delstart= delectionfromstart(head,n);

  head=delstart;
  temp=head;
  while(temp!=NULL)
  {
      printf("%d\t",temp->data);
      temp=temp->next;
  }

  getch();
  return 0;
}

struct Node* delectionfromstart(struct Node* h,int size)
{
    struct Node* start;
    start=h;
    h=h->next;
    free(start);

    return h;

}
