#include<stdio.h>
#include<conio.h>
void top();
void POP();
void PUSH();
void DISPLAY();
void STOP();
struct Stack
{
    int cap;
    int a[20];
    int top;
};
typedef struct Stack stack;

void main()
{
    int ch,st=0;
     stack s;
     s.top=-1;

     printf("\nChoose your choise:\n");
     printf("\n1. POP\n");
     printf("2. PUSH");
     printf("\n3. DISPLAY");
     printf("\n4. STOP\n");

     while(st!=1)
     {
         printf("\nEnter your choise:\n");
         scanf("%d",&ch);


         switch(ch)
         {
         case 1:
            POP();
            break;
         case 2:
            PUSH();
            break;
         case 3:
            DISPLAY();
            break;
         case 4:
            st=1;
            break;
         default:
            printf("\nEnter valid choise %d does not valid \n",ch);
         }
     }


    getch();
}

void POP()
{
    if(a[top]==MAX-1)
    {
        printf("\nStack is overflow");
    }
    else
    {

    }

}

void PUSH()
{

}

void DISPLAY()
{

}
