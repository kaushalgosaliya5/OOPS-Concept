#include<iostream.h>
#include<conio.h>

void swap(float&,float&);

void main()
{
  float x,y;

  float &a=x;
  float &b=y;

  cout <<"\n enter value of x :: ";
  cin >> x;

  cout << "\n enter value of y :: ";
  cin >> y;

  swap(x,y);

  cout << "\n value of x is :: " << x;
  cout << "\n value of y is :: " << y;

  getch();
}

void swap(float &a,float &b)
{
  float tmp;

  tmp = a;
  a = b;
  b = tmp;

}