#include<iostream.h>
#include<conio.h>

class mile
{
  int b;

  public:

  void show()
  {
    cout << "\n TOTAL MILE IS :: " << b;
  }

  void set2(float x)
  {
    b = x;
  }
};

class km
{
  int a;

  public:

  void  set1()
  {
    cout << "\n enter kilo-miter :: ";
    cin >> a;
  }

  operator mile()
  {
    mile m1;

    m1.set2(a*0.625);

    return m1;
  }
};

void main()
{
  km k1;

  k1.set1();

  mile m1 = k1;

  m1.show();

 getch();
}