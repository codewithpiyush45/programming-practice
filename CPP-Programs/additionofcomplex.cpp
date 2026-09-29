#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    complex add(complex &g1)
    {
         complex h1;
        h1.a=g1.a+a;
        h1.b=g1.b+b;
        return h1;
    }
    void display()
    {
        cout<<"Addition of this numbers: "<<endl;
        cout<<a<<" + "<<b<<"i";
    }

};
int main()
{
    complex c1,c2,c3;
    int p,q,c,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>p>>q;
    c1.setdata(p,q);
    cout<<"\nEnter two another: "<<endl;
     cin>>c>>b;
    c2.setdata(c,b);
    c3=c1.add(c2);
    c3.display();

    getch();
    return 0;
}
