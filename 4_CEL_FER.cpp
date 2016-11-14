#include<iostream.h>
#include<conio.h>

class tem
{
  float x;

  public:

  void set()
  {
     cout << "\n enter celsious value :: ";
     cin >> x;
  }

  void show()
  {
     float fer;

     fer = (9/5)*x+32;
     cout << "\n\n feranhit is :: " << fer;
     cout << "\n celsious is :: " << x;
  }

  tem operator +(tem t2)
  {
    tem tmp;

    tmp.x = x + t2.x;

    return tmp;
  }
};

void main()
{
  tem t1,t2,t3;

  t1.set();
  t2.set();

  t1.show();
  t2.show();

  t3 = t1 + t2;

  t3.show();

  getch();
}
