#include<iostream>
using namespace std;
class parent
{
    protected:

    int var1;
    int var2;
    public:
        void setdata(int m,int n)
        {
            var1=n+1;
            var2=m+1;
        }
        void display()
        {
            cout<<endl<<var1 <<var2;
        }
        void f1()
        {
            cout<<"Accessed using base pointer help by typecasting.";
        }

};
class child : public parent
{
    int var1;
    int var2;
public:
    void setdata(int m,int n)
    {
        var1=n;
        var2=m;
    }
    void display()
    {
        cout<<endl<<var1<<var2<<endl;
    }
};
int main()
{
    /*child c;

    c.setdata(11,44);
    c.parent::setdata(11,44);
    c.display();
    c.parent::display();*/
    child c;
    parent* p;
    p=&c;
    p->setdata(11,44);

    ((child *)p)->setdata(11,44);
    p->display();
    ((child *)p)->display();
      ((child *)p)->f1();

    return 0;
}
