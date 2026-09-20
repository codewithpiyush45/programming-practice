#include<iostream>
using namespace std;
class one
{
protected:
    int id;
    public:
    void f1()
    {
        id=45;
        cout<<id<<endl;
    }
};
class two : public one
{
    public:
    two()
    {
        id=18;
    }
    void f1()
    {
        cout<<id;
    }

};
int main()
{
    two t1;
    one o1;
    t1.f1();
    o1.f1();

    return 0;
}
