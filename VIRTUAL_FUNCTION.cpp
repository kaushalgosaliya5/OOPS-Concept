#include<iostream.h>
#include<conio.h>

class a
{
  public:

  void virtual display()   // use of virtual key word...............
  {
     cout << "\n subhash love ndia ";
  }
};

class b : public a
{
  public:

  void display()
  {
    cout << "\n subhash love mashala dosha";
  }
};

void main()
{
  a a1;
  b b1;

  a *ap;
  ap = &b1;
  ap -> display();

  getch();
}