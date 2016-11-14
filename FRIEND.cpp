#include<iostream.h>
#include<conio.h>

class number
{
  int x,y;

  public:

  void set()
  {
    cout << "\n value of x is :: ";
    cin >> x;

    cout << "\n value of y is :: ";
    cin >> y;
  }

  friend void avg(number);
};

void avg(number n)
{
  cout << "\n average is :: " << (n.x + n.y) / 2;
}

void main()
{
   number n;

   n.set();

   avg(n);

   getch();
}
