#include<iostream.h>
#include<conio.h>

class a
{
  int x;

  public:

  a()
  {
     cout << "\n constructer called ";

     cout << "\n enter number :: ";
     cin >> x;
  }

  ~a()
  {
    cout << "\n dectructer called ";
    cout << "\n value of x is :: " << x;

    getch();
  }
};

void main()
{
   a  a1,a2,a3;

}
