#include<iostream>
#include<conio.h>
using namespace std;
class one
{
public:
     virtual void show()
    {
        cout<<"\nParent show.";
    }
};
class two : public one
{
public:
    void show()
    {
        cout<<"\nChild show.";
    }
};
int main()
{
    one* ptr1;
    two obj2;

    ptr1=&obj2;

    ptr1->show();

    getch();
    return 0;
}
