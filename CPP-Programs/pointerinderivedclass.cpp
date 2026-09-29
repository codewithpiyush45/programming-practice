#include<iostream>
using namespace std;
class parent
{
protected:
    int id;
public:
    void display()
    {
        cout<<"\nParent class. ";
    }
};
class child : public parent
{
public:
    void display()
    {
        cout<<"\nChild class.";
    }
    void adisplay()
    {
        cout<<"\nadislay() exectued.";
    }
};

int main()
{
    child c,*p;
    //parent* p=&c;

    //p->display();
//     p->adisplay();

  //    p->parent::display();
  p->adisplay();
  p->display();

    return 0;
}
