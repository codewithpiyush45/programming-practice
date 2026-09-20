#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    void fun(int x)
    {
        cout<<"\nFun with 1 parameter.";
    }
    void fun()
    {
        cout<<"\nfun with void.";
    }
};
class B : public A
{
public:
    void fun()
    {
        cout<<"\nchild fun with void.";
    }
    void fun(int p)
    {
        cout<<"\nChild fun with 1 paramenter";
    }
};
int main()
{
    A a1;
    a1.fun(5);
    B b1;
    b1.fun(5);



    return 0;
}
