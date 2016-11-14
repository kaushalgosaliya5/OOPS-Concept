#include<stdio.h>
#include<iostream.h>

void swap(int &,int &);

void main()
{
  int x,y;

  cout << "enter first number :: ";
  cin >> x;

  cout << "enter second number :: ";
  cin >> y;

  swap(x,y);

  cout << "value of x is :: " << x << endl;
  cout << "value of y is :: " << y;

  scanf("%d");
}

void swap(int &m,int &n)
 {
   int tmp;

   tmp = m;
   m = n;
   n = tmp;
 }