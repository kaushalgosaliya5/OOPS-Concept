#include<stdio.h>
#include<iostream.h>

inline float mean(int a,int b)
{
  return (a+b) / 2;
}

void main()
{
  int x,y;

  cout << "enter value of x :: ";
  cin >> x;

  cout << "enter value of y :: ";
  cin >> y;

  cout << mean(x,y);

 scanf("%d");
}

