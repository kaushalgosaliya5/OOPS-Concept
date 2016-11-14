#include<iostream.h>
#include<conio.h>

class sample
{
  int x,y;

  public:

  void set()
  {
     cout << "\n enter value of x :: ";
     cin >> x;

     cout << "\n enter value of y :: ";
     cin >> y;
  }

  friend void avg(sample *s);
};

void avg(sample *s)
{
  cout << "\n your average is :: " << (s -> x + s -> y) / 2;
}

void main()
{
  sample s1,*s;

  s1.set();

  s = &s1;

  avg(s);

  getch();
}