#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee
{
    int id;
    struct employee* next;
    float sal;
    char name[10];
};
int main()
{
    typedef struct employee emp;
    emp *e1,*head;
    int i,n;
    printf("\nEnter number of student:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        e1=(emp *) malloc(sizeof(emp));
        printf("\nEnter details for %d employee",i);
        printf("\nEnter id of employee.\n");
        scanf("%d",&e1->id);
        printf("\nEnter salary of employee.\n");
        scanf("%d",&e1->sal);
        printf("\nEnter name of employee.\ny");
        scanf("%d",&e1->name);

    }


    getch();
    return 0;
}
