#include<iostream.h>
#include<conio.h>

class y;
class x
{
  int a;

  public:

  void set()
  {
    cout << "\n enter value x :: " ;
    cin >> a;
  }

  friend void max(x x1,y y1);
};

class y
{
  int b;

  public:

  void set()
  {
    cout << "\n enter value of y :: ";
    cin >> b;
  }

  friend void max(x x1,y y1);
};

void max(x x1,y y1)
{
  if(x1.a > y1.b)
  {
    cout << "\n x is bigger :: " << x1.a;
  }
  else
  {
    cout << "\n y is bigger :: " << y1.b;
  }
}

void main()
{
  x  x2;
  y  y2;

  x2.set();
  y2.set();

  max(x2,y2);

  getch();
}