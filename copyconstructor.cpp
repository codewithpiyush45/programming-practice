#include<iostream>
#include<conio.h>
using namespace std;

class exam
{
    int g;
    public:
    void setdata()
    {
        g=5;

    public:
    exam(exam &g1)
    {
        g1.g++;
        cout<<"value of g1.x: "<<g1.g<<endl;
    }
    exam()
    {

    }

};
int main()
{
    exam g2;
    g2.setdata();
        exam g1(g2);
    getch();
    return 0;
}

