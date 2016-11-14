#include<stdio.h>
#include<iostream.h>

void main()
{
  int x;

  cout << "enter your value x is :: ";
  cin >> x;

  int &y = x;

  x++;

  cout << "value of y is :: " << y << endl;

  y = y + 5;

  cout << "value of x is :: " << x;

  scanf("%d");
}
