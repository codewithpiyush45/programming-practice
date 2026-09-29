#include<iostream>
using namespace std;
class dept
{
protected:
    int id;
    float sal;
};
class emp : public dept
{
protected:
    char name[20];
    char colname[20];
    char job[20];
    float per;
};
class getdata : public emp
{
public:

    void get()
    {
    cout<<"Enter name of employee:\n";
    cin>>name;
    cout<<"Enter Enrollment number:\n";
    cin>>id;
    cout<<"Enter Univercity name:\n";
    cin>>colname;    cout<<"Percentage: "<<per;

    cout<<"Enter final year percentage:\n";
    cin>>per;
    cout<<"Enter company name:";
    cin>>job;
    cout<<"Enter salary of employee:\n";
    cin>>sal;
    }
};
class display : public getdata
{
public:

    void setd()
    {
    cout<<"Name: "<<name;

    cout<<"\nEnrollment Number: "<<id;
    cout<<"\nUnivercity name: "<<colname;
        cout<<"Percentage: "<<per;
    cout<<"\nPlaced in: "<<job;
    cout<<"\nSalary: "<<sal;
    }
};
int main()
{
      display d1;
      d1.get();
      d1.setd();

    return 0;
}
