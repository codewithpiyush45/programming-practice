#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node* next;
};
typedef struct Node node;
node* f=NULL,*r=NULL;
void enque(int);
void display();
void deque();
int main()
{
    enque(21);
    enque(11);
    enque(12);
    enque(13);
    enque(14);
    enque(15);
    display();

    getch();
    return 0;
}

void enque(int  x)
{
    node* temp=NULL;

             r=(node *)malloc(sizeof(node));
              r->data=x;
              if(temp==NULL)
              {
                  temp=r;
              }
              temp->next=r;
    if( f==NULL)
    {
         //r=(node *)malloc(sizeof(node));
        //r->data=x;
        //temp=r;
        f=r;
    }
}
void display()
{
    while(f<=r)
    {
        printf("%d\t",f->data);
        f=f->next;
    }
}
