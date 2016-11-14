#include<iostream.h>
#include<conio.h>

class kg
{
  float b;

  public:

  void show2()
  {
    cout << "\n TOTAL KILLO-GREAM IS :: "<< b;
  }

  void setk(float x)
  {
    b = x;
  }
};

class pound
{
  float a;

  public:

  void set1()
  {
    cout << "\n enter value of pound :: ";
    cin >> a;
  }

  operator kg()
  {
    kg k1;

    k1.setk(a*0.45);

    return k1;
  }
};


void main()
{
  pound p1;

  p1.set1();

  kg k1 = p1;

  k1.show2();

 getch();
}