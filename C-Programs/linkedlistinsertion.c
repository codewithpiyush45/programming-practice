#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
  typedef struct Node node;
  node* head=NULL,*n1,*temp;
  int i,n;
  printf("\nEnter number of node: \n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
      n1=(node *) malloc(sizeof(node));
      printf("\nEnter data in %d node",i+1);
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
  temp=head;
  while(temp!=NULL)
  {
      printf("%d\t",temp->data);
      temp=temp->next;
  }

  getch();
  return 0;
}
