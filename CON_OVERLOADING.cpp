#include<iostream.h>
#include<conio.h>

class sample
{
  int x;

  public:

  sample(int i)   //  constrecter overloading.......
  {
    x = i;
  }

  sample()
  {
    x = 5;
  }

  void show()
  {
     cout << "\n your value of x is :: " << x;
  }
};

void main()
{
  int x;

  cout << "\n enter value of x :: ";
  cin >> x;

  sample s1(x),s2;    // constrecter overloading...........

  s1.show();
  s2.show();

  getch();
}