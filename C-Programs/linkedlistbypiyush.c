
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*  next;
};typedef struct Node node;

  node* head=NULL;

void creationlist(int n)
{
    int i; node* temp,*n1;


    for(i=0; i<n; i++)
    {
        n1=(node *)malloc (sizeof(node));
        printf("\n\aEnter data in %d node:\n",i+1);
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

    temp->next=NULL;
    printf("\n%d nodes created successfully with above data:\n",n);


}
void insertatbegin()
{
    node* n1;
    n1=(node *)malloc(sizeof(node));
    printf("\nEnter data in first new node:\n");
    scanf("%d",&n1->data);
     n1->next=head;
     head=n1;

     printf("\nNew Node inserted at begin successfully:\n");
}
void insertatend()
{
    node* h1,*n3;
    h1=head;

    while(h1->next!=NULL)
    {
        h1=h1->next;
    }

    n3=(node *) malloc(sizeof(node));

     printf("\nEnter data in last node:\n");
     scanf("%d",&n3->data);

    h1->next=n3;
    n3->next=NULL;

    printf("\nNew node created at end successfully:\n");
}

  void insertatmiddle(int n)
  {
      node* h=head,*n1;
      int cout=1,index;

      while(h!=NULL)
      {
          cout++;
          h=h->next;
      }


      printf("\nEnter index to insert:\n");
      scanf("%d",&index);

      if(index>=cout)
      {
         printf("\nInvalid Index:\n");
      }

      else
      {
          cout=1;
          h=head;
         while(cout!=index-1)
         {
             h=h->next;
             cout++;
         }

         n1=(node *)malloc(sizeof(node));
         printf("\nEnter data in %d new index:\n",index);
         scanf("%d",&n1->data);
         n1->next=h->next;
         h->next=n1;

           printf("\nNew node created successfully at %d index\n",index);

      }
  }

  void deletionatbegin()
  {
      node* j=head;

      head=head->next;
      j->next=NULL;

      free(j);
      printf("\nFirst/begin node delete successfully.\n");
  }

    void deletionatend()
    {
        node* a,*p;
        a=head;

        if(head==NULL)
        {
            printf("\nNodes not created:\n");
        }
        else
        {
            while(a->next->next!=NULL)
            {

                a=a->next;
            }

                    p=a->next;
                    a->next=NULL;

                free(p);
                printf("\nNode is deleted from end.\n");
        }


    }

    void deletionatmiddle()
    {
        int n,cout=1;
        node* h=head,*r;

       printf("\nEnter index of node you want to delete:\n");
       scanf("%d",&n);

       if(head==NULL)
       {
           printf("\nList is empty:\n");
       }

       else
       {

       while(cout!=n-1)
       {
           h=h->next;
           cout++;
       }

           r=h->next;
           h->next=r->next;
           r->next=NULL;

           free(r);

      printf("\nNode is deleted at index %d\n",n);
       }
    }

    void searchdatanode()
    {
        node* s;
        s=head;
        int key,flag=0;

        printf("\nEnter data to search:\n");
        scanf("%d",&key);

        if(head==NULL)
        {
            printf("\nNode's does not exist:\n");
        }
        else
        {
            while(s!=NULL)
            {
                if(key==s->data)
                {
                    flag=1;
                }
                s=s->next;
            }

        }

        if(flag==1)
        {
            printf("\nData is found .\n");
        }
        else
        {
            printf("\nData not found.\n");
        }
    }

    void updatenode()
    {
        node* up=head;
        int newv,old,flag=0;

        printf("\nEnter old data to update:\n");
        scanf("%d",&old);

       while(up!=NULL)
       {
           if(up->data==old)
           {
               flag=1;
               break;
           }
           up=up->next;
       }


        if(flag==1)
        {

             printf("\nEnter new data to updata:\n");
            scanf("%d",&newv);

        while(up->data!=old)
         {
            up=up->next;
         }
          up->data=newv;
          printf("\nNew value updated successfully:\n");
        }
        else
        {
            printf("\nNumber not found in linked list:\n");
        }
    }

  void display()
  {
      struct Node* d1;
      d1=head;

      while(d1!=NULL)
      {
          printf("%d -> ",d1->data);
          d1=d1->next;
      }
  }

int main()
{
     int ch,size;

     printf("\nEnter number of nodes:\n");
     scanf("%d",&size);

     if(size!=0)
     {

     creationlist(size);

     printf("\n1. Insert at begin.");
     printf("\n2. Insert at end.");
     printf("\n3. Insert at middle.");
     printf("\n4. Deletion at begin");
     printf("\n5. Deletion at end.");
     printf("\n6. Deletion at middle");
     printf("\n7. search data.");
     printf("\n8. update node data.");
     printf("\n9. Display");
     printf("\n10. Stop.\n");
     int rep=1;

     while(rep!=0)
     {
         printf("\nEnter your choise:\n");
         scanf("%d",&ch);

         switch(ch)
         {

         case 1:
            insertatbegin();
            break;

         case 3:
            insertatmiddle(size);
            break;

         case  2:
            insertatend();
            break;

         case 4:
            deletionatbegin();
            break;

         case 5:
            deletionatend();
            break;

         case 6:
            deletionatmiddle();
            break;

         case 7:
            searchdatanode();
            break;

         case 8:
            updatenode();
            break;

         case 9:
            display();
            break;

         case 10:
            rep=0;
              break;

         default:
                printf("\nEnter valid choise(1 to 10)\n");

         }
       }
     }

     else
     {
         printf("\n.Enter valid size 0 does not size :");
     }

    getch();
    return 0;

}
