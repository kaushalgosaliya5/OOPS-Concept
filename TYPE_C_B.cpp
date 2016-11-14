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

  operator int()
  {
    int y;

    y = h * 60 + m;

    return y;
  }
};

void main()
{
  time t1=75;

  int z = t1;

  cout << "\n class to base convertion is :: " << z;

 getch();
}