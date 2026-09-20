#include<stdio.h>
#include<conio.h>
#define MAX 10
int a[MAX];
int top=-1;
void display();
void POP();
void PUSH();
void main()
{
    int ch,st=0;

    printf("\nChoose your choise\n");
    printf("\n1. POP operation\n");
    printf("\n2. PUSH operation\n");
    printf("\n3. Display\n");
    printf("\n4. Stop\n");

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
            display();
            break;
        case 4:
            st=1;
            break;
        default:
            printf("\nInvalid choise! Enter valid choise:\n");
        }
    }

    getch();
}

void PUSH()
{
    int ele;
    if(top==MAX-1)
    {
        printf("\nStack is Overflow\n");
    }
    else
    {
        printf("\nEnter data to pop(insertion):\n");
        scanf("%d",&ele);
        top++;
        a[top]=ele;
        printf("\nElement pushed successfully:\n");

     }
}

void POP()
{
    int ele;
    if(top==-1)
    {
        printf("\nStack is underflow\n");
    }
    else
    {
        ele=a[top];
        printf("\npushed element is:%d\n",ele);
        top--;
        printf("\nelement poped successfully\n");
    }
}

void display()
{
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        while(top!=-1)
        {
            printf("%d\t",a[top]);
            top--;
        }
    }
}
