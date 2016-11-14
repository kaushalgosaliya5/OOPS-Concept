#include<iostream.h>
#include<conio.h>

inline void large(int a,int b,int c)
{
  if(a > b)
  {
    if(a > c)
    {
      cout << "\n a is grater value :: " << a;
    }
    else
    {
      cout << "\n c is grater value :: " << c;
    }
  }
  else
  {
    if(b > c)
    {
      cout << "\n b is grater value :: " << b;
    }
    else
    {
      cout << "\n c is grater value :: " << c;
    }
  }
}

void main()
{
  int x,y,z;

  cout << "\n value of x is :: ";
  cin >> x;

  cout << "\n value of y is :: ";
  cin >> y;

  cout << "\n value of z is :: ";
  cin >> z;

  large(x,y,z);

  getch();
}

