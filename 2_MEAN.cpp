#include<iostream.h>
#include<conio.h>

class y;
class x
{
  int a;

  public:

  void set()
  {
    cout << "\n enter value of a :: ";
    cin >> a;
  }

  friend class y;
};

class y
{
  int b;

  public:

  void set()
  {
    cout << "\n enter value of b :: ";
    cin >> b;
  }

  void mean(x x1)
  {
     cout << "\n mean is :: " << (x1.a+b) / 2;;
  }
};

void main()
{
  x x1;
  y y1;

  x1.set();
  y1.set();

  y1.mean(x1);

  getch();
}