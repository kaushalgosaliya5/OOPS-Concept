#include<iostream.h>
#include<conio.h>

class shape
{
  public:

  void area(int a)
  {
    cout << "\n\n square of area is :: " << a * a;

  }

  void area(int a,int b)
  {
    cout << "\n\n rectangle of area is :: " << a * b;
  }
};

void main()
{
  int l,w;

  cout << "\n enter length of square :: ";
  cin >> l;

  shape s,r;

  s.area(l);

  cout << "\n\n enter length of rectangle :: ";
  cin >> l;

  cout << "\n enter width of rectangle :: ";
  cin >> w;

  r.area(l,w);

  getch();
}