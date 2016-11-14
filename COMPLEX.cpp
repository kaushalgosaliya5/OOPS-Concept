#include<iostream.h>
#include<conio.h>


class complex
{
  int x,y;

  public:

  void set()
  {
    cout << "\n enter real number :: ";
    cin >> x;

    cout << "\n enter imaging number :: ";
    cin >> y;
  }

  void show()
  {
    cout << "\n your sum is :: " << x << "i + " << y;
  }

  friend complex operator +(complex &,complex &);
};

complex operator +(complex &c1,complex &c2)
{
  complex tmp;

  tmp.x = c1.x + c2.x;
  tmp.y = c1.y + c2.y;

  return tmp;
}

void main()
{
  complex c1,c2,c3;

  c1.set();
  c2.set();

  c3 = c1 + c2;

  c3.show();

 getch();
}