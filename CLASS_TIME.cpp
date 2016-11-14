#include<iostream.h>
#include<conio.h>
class time
{
  int hh,mm;

  public:

  void set();
  void display();
};

void time :: set()
{
  cout << "\n enter hours :: ";
  cin >> hh;

  cout << "\n enter minutes :: ";
  cin >> mm;
}

void time :: display()
{
  cout << "\n your time is (HH::MM) :: ";
  cout << hh << " : " << mm;
}

void main()
{
  time t;

  t.set();
  t.display();

  getch();
}