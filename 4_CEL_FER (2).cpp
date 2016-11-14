#include<iostream.h>
#include<conio.h>

class celsious
{
  float cel;

  public:

  void set()
  {
     cout << "\n enter celsious value :: ";
     cin >> cel;
  }

  float getcel()
  {
    return cel;
  }
};

class ferenhit
{
  float fer;

  public:

  ferenhit(celsious c1)
  {
    fer = (c1.getcel()*9/5)+32;
  }

  void show()
  {
    cout << "\n ferenhit is :: " << fer;
  }
};

void main()
{
  celsious c1;

  c1.set();

  ferenhit f1 = c1;

  f1.show();

 getch();
}