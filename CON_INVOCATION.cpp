#include<iostream.h>
#include<conio.h>

class base
{
  protected:

  int x;

  public:

  base(int m)
  {
    x = m;
  }

  void show()
  {
    cout << "\n value of x is :: " << x;
  }
};

class deriave : public base
{
  int y;

  public:

  deriave(int m,int n) : base(m)
  {
     y = n;
  }

  void show()
  {
    cout << "\n value of x is :: " << x;
    cout << "\n value of y is :: " << y;
  }
};

void main()
{
  deriave d1(10,11);

  d1.show();

 getch();
}