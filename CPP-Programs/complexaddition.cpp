#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int x,y;
public:
    void setdata(int p,int q)
    {
        x=p;
        y=q;
    }
   complex add(complex g1)
    {
        complex h1;
        h1.x=x+g1.x;
        h1.y=y+g1.y;

        return h1;
    }
    void display()
    {
        cout<<"Addition of this numbers:\n";
        cout<<x<<" + "<<y<<"i";

    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(11,17);
    c2.setdata(12,18);

   c3=c1.add(c2);
   c3.display();
    return 0;
}
