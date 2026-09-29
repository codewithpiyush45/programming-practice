#include<iostream>
#include<conio.h>
using namespace std;
class overloading
{
    int x;
public:
    overloading(int x)
    {
        this->x=x;
        //cout<<this->x;
    }
    void operator -()
    {
        x=-x;

    }
    void display()
    {
        cout<<x;
    }
};

int main()
{
    overloading o(5);

     //-o;
     o.operator -();
    o.display();
    getch();
    return 0;
}
