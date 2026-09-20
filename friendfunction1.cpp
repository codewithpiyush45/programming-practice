#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    int x,y;
public:
    friend void fun1(demo  d);

};
void fun1(demo d)
{
    d.x=99;
    d.y=28;
    cout<<" "<<d.x<<" " <<d.y;
}
int main()
{
    demo d1;
    fun1(d1);

    getch();
    return 0;
}
