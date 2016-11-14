#include<stdio.h>
#include<iostream.h>

void bigger(int &,int &);

void main()
{
  int x,y;

  cout << "enter first number :: ";
  cin >> x;

  cout << "enter second number :: ";
  cin >> y;

  bigger(x,y);

  cout << "\n  value of x is :: " << x;
  cout << "\n value of y is :: " << y;

  scanf("%d");
}

void bigger(int &m,int &n)
{
  if(m > n)
  {
     m = 0;
  }
  else
  {
     n = 0;
  }
}
