#include<iostream.h>
#include<conio.h>

class time
{
  int h,m;

  public:

  time(int x)
  {
    h = x / 60;
    m = x % 60;
  }

  void show()
  {
    cout << "\n hours is :: "  << h;
    cout << "\n minute is :: " << m;
  }
};

void main()
{
  time t1=85;  // time t1(85);

  t1.show();

  getch();
}