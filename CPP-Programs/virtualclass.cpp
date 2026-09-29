#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    protected:
    int a,b;
    virtual void fun()=0;
};
class B : public A
{
  void    fun()
    {
            a=45;
            b=18;
    }
public:
    void f1()
    {
        cout<<"\nPIYUSH";
    }

    void display()
    {
        cout<<a<<""<<b;
    }
};
int main()
{

    B b1;
    b1.f1();
    b1.display();
}
