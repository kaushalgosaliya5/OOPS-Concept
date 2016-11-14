#include<iostream.h>
#include<conio.h>

class a
{
  protected:

  int x;

  public:

  void set1()
  {
    cout << "\n enter value of x :: ";
    cin >> x;
  }
  void show1()
  {
    cout << "\n value of x is :: " << x;
  }
};

class b : protected a
{
  int y;

  public:

  void set2()
  {
    set1();

    cout << "\n enter value of y is :: ";
    cin >> y;
  }
  void show2()
  {
    show1();
    cout << "\n value of y is :: " << y;
  }
};

void main()
{
  b b1;
  a a1;

  cout << "\n 1. class x " << endl;

  a1.set1();
  a1.show1();

  cout << "\n\n\n 2. class x ans y " << endl;

  b1.set2();
  b1.show2();

  getch();
}
