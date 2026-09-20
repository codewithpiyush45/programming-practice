#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one
{
    int x,y;
    public:
    friend void friendf(one o,two t);
};
class two
{
    int a,b;
public:
    friend void friendf(one o,two t);
};
void friendf(one o,two t)
{
    o.x=45;
    o.y=18;
    t.a=63;
    t.b=32;
    cout<<"value of x and y: "<<o.x<<" "<<o.y;
    cout<<endl<<"value of a and b: "<<t.a<<" "<<t.b;
}
int main()
{
   one o1;
   two t1;
   friendf(o1,t1);

    return 0;
}
