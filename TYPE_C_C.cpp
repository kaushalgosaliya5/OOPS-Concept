#include<iostream.h>
#include<conio.h>

class km
{
  float x;

  public:

  void set()
  {
    cout << "\n enter kilo-metter :: ";
    cin >> x;
  }

  float showkm()
  {
    return x;
  }
};

class mile
{
  float y;

  public:

  mile(km k1)
  {
    y = k1.showkm() * 0.625;
  }

  void show()
  {
    cout << "\n TOTAL mile is :: " << y;
  }
};

void main()
{
  km k1;

  k1.set();

  mile m1 = k1;

  m1.show();

 getch();
}