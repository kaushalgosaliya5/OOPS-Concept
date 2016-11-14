#include<iostream.h>
#include<conio.h>

class FLOAT
{
  float x;

  public:

  void set()
  {
    cout << "\n enter value of x :: ";
    cin >> x;
  }

  void show()
  {
    cout << "\n new value of x is :: " << x;
  }

  FLOAT operator +(FLOAT f2)
  {
    FLOAT tmp;

    tmp.x = x + f2.x;

    return tmp;
  }

  FLOAT operator -(FLOAT f2)
  {
    FLOAT tmp;

    tmp.x = x - f2.x;

    return tmp;
  }

  FLOAT operator *(FLOAT f2)
  {
    FLOAT tmp;

    tmp.x = x * f2.x;

    return tmp;
  }

  FLOAT operator /(FLOAT f2)
  {
    FLOAT tmp;

    tmp.x = x / f2.x;

    return tmp;
  }
};

void main()
{
  FLOAT f1,f2,f3;

  f1.set();
  f2.set();

  cout << "\n\n sum is :: ";
  f3 = f1 + f2;
  f3.show();

  cout << "\n\n subtreaction is :: ";
  f3 = f1 - f2;
  f3.show();

  cout << "\n\n multiplication is :: ";
  f3 = f1 * f2;
  f3.show();

  cout << "\n\n divition is :: ";
  f3 = f1 / f2;
  f3.show();

  getch();
}