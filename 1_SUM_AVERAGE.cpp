#include<iostream.h>
#include<conio.h>

inline void sample(float x,float y)
{
  float ave,sum;

  sum = x + y;
  ave = (x+y) / 2;

  cout << "\n sum is :: " << sum;
  cout << "\n average is :: " << ave;
}

void main()
{
  float x,y;

  cout << "\n enter value of x is :: ";
  cin >> x;

  cout << "\n enter value of y is :: ";
  cin >> y;

  sample(x,y);

  getch();
}