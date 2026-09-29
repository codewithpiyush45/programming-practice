#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
   virtual void fun()   //It is used to late binding of
   //parent function if we create pointer of child class.--
    {
        cout<<"\nparent function";
    }
};
class B : public A
{
public:
    void fun()
    {
        cout<<endl<<"child function.";
    }
};
int main()
{
    A *a1;
    B b1;
    a1=&b1;
    (*a1).fun();

    getch();
    return 0;
}
