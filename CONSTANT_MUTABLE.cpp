#include<iostream.h>
#include<conio.h>

class sample
{
  int x;  // const int x;  this is a constant value of x not change any other function
  mutable int y;

  public:

  void set() // const   // this is a constant function   not change value in dicaler function
  {
    x = 10;
    y = 20;
  }

  void display()
  {
    cout << "\n value of x is :: " << x;
    cout << "\n value of y is :: " << y;
  }
};

void main()
{
  sample s;

  s.set();
  s.display();

  getch();
}