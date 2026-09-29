#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int x,y;

    public:
        void setdata(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        complex operator +(const complex& b)
        {
            complex h;
            h.x=x+b.x;
            h.y=y+b.y;
            return h;
        }
        void display()
        {
            cout<<"\nAddition of this Numbers: "<<endl;
            cout<<x<<" + "<<y;
        }

};
int main()
{
    complex c1,c2,c3;
    int a,b,c,d;

    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    c1.setdata(a,b);

    cout<<"Enter another two values: "<<endl;
    cin>>c>>d;
    c2.setdata(c,d);

    c3=c1+c2;
    c3.display();

    return 0;
}
