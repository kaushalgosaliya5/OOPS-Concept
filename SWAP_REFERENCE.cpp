#include<stdio.h>
#include<iostream.h>

void swap(int *,int *);

void main()
{
  int x,y;
  int *p,*q;

  p = &x;
  q = &y;

  cout << "\n enter value of x is :: ";
  cin >> x;

  cout << "\n enter value of y is :: ";
  cin >> y;

  swap(p,q);

  cout << "\n value of x is :: " << x;
  cout << "\n value of y is :: " << y;

  scanf("%d");
}

void swap(int *m,int *n)
{
  int tmp;

  tmp = *m;
  *m = *n;
  *n = tmp;
}