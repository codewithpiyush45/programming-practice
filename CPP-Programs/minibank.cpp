 #include<iostream>
 #include<conio.h>
 class bank
 {
     int password;

     public:
     void setpin(int pin)
     {
         password=pin;
     }

 };
 using namespace std;
 int  main()
 {
         bank b1;
      int pass;
     cout<<"\n\t\tWelcome to my MINI UPI:\n";

     cout<<"\nEnter Bank Password:\n";
     cin>>pass;
     b1.setpin(pass);

     getch();
     return 0;
 }
