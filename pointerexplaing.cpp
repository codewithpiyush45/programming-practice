#include<iostream>
using namespace std;
class parent
{
    int p,q;
public:
    void setdata(int a,int b)
    {
        p=a;q=b;
    }
    friend void display();
};
void display(parent& p)
{
    cout<<p.p<<" "<<p.q;
}
class child: public parent
{
    int x,y;
    void setdata(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
int main()
{
    parent* ptr;
    child c;
    ptr=&c;

    ptr->setdata(11,22);
     display();

    return 0;
}

