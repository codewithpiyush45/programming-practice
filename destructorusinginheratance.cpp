#include<conio.h>
#include<iostream>
using namespace std;
class A
{
public:
    ~A()
    {
        cout<<"\nParent destructor.\n";
    };

};
class B : public A
{
public:
    ~B()
    {
        cout<<"Child destructor.";
    };
};
int main()
{
    B b1;

    getch();
    return 0;
}
N
