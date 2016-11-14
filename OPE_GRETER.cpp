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

  int operator < (sample &s2)
  {
    if(x < s2.x)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
};

void main()
{
  sample s1,s2;

  s1.set();
  s2.set();

  if(s1 < s2)
  {
     cout << "\n s1 is greter ";
  }
  else
  {
     cout << "\n s2 is greter ";
  }

 getch();
}