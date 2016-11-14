#include<iostream.h>
#include<conio.h>

class bankaccount
{
  int accno;
  char name[10];
  int balance;
  float r;

  public:

  bankaccount()
  {
    r = 9.5;
  }

  void account()
  {
     clrscr();

     cout << "\n enter account number :: ";
     cin >> accno;

     cout << "\n enter holder name :: ";
     cin >> name;

     cout << "\n enter currunt balance :: ";
     cin >> balance;
  }

  void displaydetail()
  {
    cout << "\n  " << accno << "   " << "   " << name << "    " << balance << "   " << interest();
  }

  float interest()
  {
     return (balance * r) / 100;
  }
};

void main()
{
   bankaccount h[3];
   int i;

   for(i=0;i<3;i++)
   {
     h[i].account();
   }

   cout << "\n acc.no    name     balance     rate of interest";

   for(i=0;i<3;i++)
   {
     h[i].displaydetail();
   }

   getch();
}