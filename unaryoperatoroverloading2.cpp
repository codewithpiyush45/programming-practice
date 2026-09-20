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
    }
    void operator ++()
    {
        x=x++;
    }
    void display()
    {
        cout<<"\nOverloaded in ++ "<<x<<endl;
    }
};

int main()
{
    overloading o(11);
    //o.operator ++();

      ++o;
    o.display();

    getch();
    return 0;
}
