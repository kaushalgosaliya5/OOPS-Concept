#include<iostream.h>
#include<conio.h>

class num2;
class num1
{
  int n1;

  public:

  void set()
  {
    cout << "\n enter value of n1 :: ";
    cin >> n1;
  }

  friend void add(num1,num2);
};

class num2
{
  int n2;

  public:

  void set()
  {
    cout << "\n enter value of n2 :: ";
    cin >> n2;
  }

  friend void add(num1,num2);
};

void add(num1 x,num2 y)
{
  cout << "\n two number addition :: ";

  cout << x.n1 + y.n2;
}

void main()
{
  num1 n1;
  num2 n2;

  n1.set();
  n2.set();

  add(n1,n2);

  getch();
}