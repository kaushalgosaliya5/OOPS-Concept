#include<iostream.h>
#include<conio.h>

class time
{
  int h,m;

  public:

  void set()
  {
    cout << "\n enter hours :: ";
    cin >> h;

    cout << "\n enter minute :: ";
    cin >> m;
  }

  void show()
  {
    cout << "\n new time is :: " << h << " :: " << m;
  }

  time operator +(time t2)
  {
    time tmp;

    tmp.h = h + t2.h;
    tmp.m = m + t2.m;

    if(tmp.m >= 60)
    {
       tmp.h = tmp.h + tmp.m / 60;
       tmp.m = tmp.m % 60;
    }

    return tmp;
  }

  friend void operator >=(time,time);
};

 void operator >=(time t1,time t2)
 {
   int s1,s2;

   s1 = (t1.h*60) + t1.m;
   s2 = (t2.h*60) + t2.m;

  if(s1 > s2)
  {
    cout << "\n\n T1 is greater ";
  }
  else if(s1 < s2)
  {
    cout << "\n\n T2 is greater ";
  }
  else
  {
    cout << "\n\n BOTH IS SAME";
  }
 }

void main()
{
  time t1,t2,t3;

  cout << "\n enter first time :: \n";
  t1.set();

  cout << "\n enter seconde time :: \n";
  t2.set();

  t3 = t1 + t2;

  t3.show();

  t1 >= t2;

 getch();
}