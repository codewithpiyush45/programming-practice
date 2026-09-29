#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    virtual void fun()=0;
};
class B : public A
{
    void fun()
    {

    }

};
int main()
{
    B b1;

    return 0;
}
