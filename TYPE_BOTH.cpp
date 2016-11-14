#include<iostream.h>
#include<conio.h>

class d2
{
  float feet;
  float inches;

  public:

  void set2()
  {
    cout << "\n enter feet :: ";
    cin >> feet;

    cout << "\n enter inches :: ";
    cin >> inches;
  }

  float get2()
  {
    return (feet*12) + inches;
  }
};

class d1
{
  int m;
  int cm;

  public:

  d1 (d2 x)
  {
    cm = x.get2() * 2.54;

    if(cm >= 100)
    {
      m = cm / 100;
      cm = cm % 100;
    }
  }

  void show1()
  {
    cout << "\n mitter is :: " << m;
    cout << "\n centi-mitter is :: " << cm;
  }
};

void main()
{
  d2 a;

  a.set2();

  d1 b = a;

  b.show1();

 getch();
}