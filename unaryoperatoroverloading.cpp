#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int x,y;
public:
    void setdata(int p,int q)
    {
        x=p; y=q;
    }

    complex operator -()
    {
        complex h;
        h.x=-x;
        h.y=-y;

        return h;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
};

int main()
{
    complex c1,c2;
    int a,b;

    cout<<"\nEnter two numbers:\n";
    cin>>a>>b;
     c1.setdata(a,b);

      c2=-c1;
      c2.display();

    return 0;
}
