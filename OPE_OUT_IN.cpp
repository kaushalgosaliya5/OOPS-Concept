#include<iostream.h>
#include<conio.h>

class number
{
  int x;

  public:

  void show()
  {
    cout << "\n value of x is :: " << x;
  }

  friend void operator >>(istream &din,number &n1);
  friend void operator <<(ostream &dout,number &n1);
};

 void operator >>(istream &din,number &n1)
 {
    din >> n1.x;
 }

 void operator <<(ostream &dout,number &n1)
 {
   dout << n1.x;
 }

void main()
{
  number n1;

  cout << "\n enter value of x :: ";

  cin >> n1;

  cout << "\n value of x is with cout :: ";
  cout << n1;

  n1.show();

 getch();
}