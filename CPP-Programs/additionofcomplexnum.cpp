#include<iostream>
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
    complex add(const complex &b)
    {
        complex h;

        h.x=x+b.x;
        h.y=y+b.y;
        return h;
    }
    void display()
    {
        cout<<"Addition of this numbers: "<<endl;
        cout<<x<< " + "<<y;
    }

};

int main()
{
    complex c1,c2,c3;
    int x,y,a,b;

    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    c1.setdata(x,y);
    cout<<"Enter another two numbers: "<<endl;
    cin>>a>>b;
    c2.setdata(a,b);

    c3=c1.add(c2);

    c3.display();

    return 0;
}
