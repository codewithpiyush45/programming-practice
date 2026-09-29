#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 10
char stack[MAX];
int top=-1;
void push(char);
char pop();
int main()
{
    char str[MAX],rev[MAX];
    int i=0,len;
    printf("\nEnter String: ");
    scanf("%s",str);

    len=strlen(str);
     while(i<len)
     {
        push(str[i]);
         i++;
     }
     i=0;
     while(i<len)
     {
         rev[i]=pop();
         i++;
     }
     rev[i]='\0';

     printf("\nReversed string: %s",rev);

    getch();
    return 0;
}

void push(char c)
{
    if(top==MAX-1)
    {
        printf("\nStack Overflow.");
        return;
    }
    top++;
    stack[top]=c;
}

char pop(void)
{
    if(top==-1)
    {
        printf("\nStack Underflow.");
        return '\0';
    }
    char ch=stack[top];
    top--;
    return ch;
}
