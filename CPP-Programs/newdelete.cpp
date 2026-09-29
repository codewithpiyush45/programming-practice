#include<iostream>
#include<conio.h>
using namespace std;
class under
{
    int x,y;
public:
    under(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void show()
    {
        cout<<x<<endl<<y;
    }
    ~under()
    {
        cout<<"Memory deleted.";
    }
};
int main()
{
    under *u=new under(11,22);
    u->show();

         delete u;
    getch();
    return 0;
}
