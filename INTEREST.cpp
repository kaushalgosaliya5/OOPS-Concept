#include<stdio.h>
#include<iostream.h>

float interest(float p,float n,float r=9.5);

void main()
{
  float p,r,n;

  cout << "enter principal amount :: ";
  cin >> p;

  cout << "enter rate of interest :: ";
  cin >> r;

  cout << "enter number of year :: ";
  cin >> n;

  cout << "your interest is :: " << interest(p,r,n) << endl;
  cout << "your interest is :: " << interest(p,n);

 scanf("%d");
}

float interest(float p,float n,float r)
{
  return p * r * n / 100;
}