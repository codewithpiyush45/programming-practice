#include<iostream>
#include<conio.h>
using namespace std;
class exam
{
public:
    void f1(int &x)
    {
        x++;
        cout<<&x<<endl;
        cout<<"vlaue of x: "<<x<<endl;
    }
};
int main()
{
    int y;
    exam e1;
    y=5;
    e1.f1(y);
    cout<<"Value of y: "<<y<<endl;
    cout<<&y<<endl;

    getch();
    return 0;
}
