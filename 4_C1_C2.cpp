#include<iostream.h>
#include<conio.h>

class sample
{
  int x;

  public:

  void set()
  {
    cout << "\n enter value of x :: ";
    cin >> x;
  }

  void show()
  {
    cout << "\n new value is :: " << x;
  }

  void operator +=(sample s2)
  {
    x = x + s2.x;
  }
};

void main()
{
  sample c1,c2;

  c1.set();
  c2.set();

  c1+=c2;

  c1.show();

 getch();
}