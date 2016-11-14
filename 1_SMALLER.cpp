#include<iostream.h>
#include<conio.h>

void smaller(int&,int&);

void main()
{
  int x,y;

  int &p = x;
  int &q = y;


  cout << "\n enter value of x :: ";
  cin >> x;

  cout << "\n enter value of y :: ";
  cin >> y;

  smaller(p,q);

  cout << "\n value of x is :: " << x;
  cout << "\n value of y is :: " << y;

  getch();
}

void smaller(int &p,int &q)
{
   if(p > q)
   {
     q = 0;
   }
   else
   {
     p = 0;
   }
}