#include<iostream.h>
#include<conio.h>

class number
{
  int x;

  public:

  void set()
  {
    cout << "\n enter value of x :: ";
    cin >> x;
  }

  void show()
  {
    cout << "\n value of x is :: " << x;
  }

  number operator -()
  {
    number tmp;

    tmp.x = - x;

    return tmp;
  }
};

void main()
{
  number n1,n2;

  cout << "\n please enter minush number :: \n";

  n1.set();

  n2 = -n1;

  n2.show();

 getch();
}