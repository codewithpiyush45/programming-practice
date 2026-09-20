#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    static int y;
public:
    static void f1()
    {
        y=45;
    }
    static void display()
    {
        cout<<"Static value is: "<<y;
    }
};
int demo::y;
int main()
{
    demo::f1();
    demo::display();

    getch();
    return 0;
}
