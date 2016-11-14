#include<iostream.h>
#include<conio.h>

class si
{
  int p,n;
  float r;

  public:

  void set(int a,float b=10.0,int c=2)
  {
    p = a;
    r = b;
    n = c;
  }

  void cal_inte()
  {
    cout << "\n simple interest :: " << (p*r*n) / 100;
  }
};

void main()
{
  int x,z;
  float y;

  cout << "\n enter principal amount :: ";
  cin >> x;

  cout << "\n enter rate of interest :: ";
  cin >> y;

  cout << "\n enter number of year :: ";
  cin >> z;

  si s;

  cout << "\n default value before :: ";

  s.set(x,y,z);
  s.cal_inte();

  cout << "\n default value after :: ";

  s.set(x);
  s.cal_inte();

  getch();
}