#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    // static int y;
 public:
    static int y;

};
int demo::y;
int main()
{
    demo::y=45;
    cout<<""<<demo::y;

    getch();
    return 0;
}
