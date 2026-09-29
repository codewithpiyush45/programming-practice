#include<iostream>
using namespace std;
class parent
{
public:
    parent()
    {
        cout<<"\nparent called.";
    }
};
class child : public parent
{
public:
    child()
    {
        cout<<"\nChild called.";
    }
};

int main()
{
    child c;

    return 0;
}
