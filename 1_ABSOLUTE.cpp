#include<iostream.h>
#include<conio.h>

int absolute(int x);
float absolute(float y);
long absolute(long z);

void main()
{
  int x;
  float y;
  long z;

  cout << "\n enter integer value of x :: ";
  cin >> x;

  cout << "\n enter float value of y :: ";
  cin >> y;

  cout << "\n enter long value of z :: ";
  cin >> z;

  cout << "\n value of x is :: "  << absolute(x);
  cout << "\n value of y is :: "  << absolute(y);
  cout << "\n value of z is :: "  << absolute(z);

  getch();
}

int absolute(int x)
{
  if(x < 0)
  {
    return x * (-1);
  }
  else
  {
    return x;
  }
}

float absolute(float y)
{
  if(y < 0)
  {
    return y * (-1);
  }
  else
  {
    return y;
  }
}

long absolute(long z)
{
   if(z < 0)
   {
     return z * (-1);
   }
   else
   {
     return z;
   }
}


