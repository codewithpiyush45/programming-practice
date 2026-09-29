#include<stdio.h>
#include<conio.h>
struct Node
{
    int p;
    struct Node* next;
};
int main()
{
    printf("\nEnter your choice:\n");
    printf("\n1.Insert at start:\n");
    printf("\n2.Insert at end:\n");
    printf("\n3.Insert at middle:\n");
    printf("\n4.Deletion from start");
    printf("\n5.Deletion from end");
    printf("\n6.Deletion from middle");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        {
            createnode();
            break;
        }
    case 2:
        {
            createnode();
            break;
        }
    case 3:
        {
            createnode();
            break;
        }
    case 4:
        {
            break;
        }
    case 5:
        {
            break;
        }
    case 6:
        {
            break;
        }
    case 7:
        {
            display();
            break;
        }
    case 8:
        {
            exit(0);

        }
        default
        {
            printf("\nWrong Input:\n");
        }
    }

    getch();
    return 0;
}
