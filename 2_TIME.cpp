#include<iostream.h>
#include<conio.h>

class time
{
  int hh;
  int mm;

  public:

  void set()
  {
     cout << "\n enter hourse :: ";
     cin >> hh;

     cout << "\n enter minute :: ";
     cin >> mm;
  }

  void display()
  {
     cout << "\n your time is :: " << hh << " :: " << mm;
  }

  friend time add(time,time);
};

time add(time t1,time t2)
 {
    time t;

    t.hh = t1.hh + t2.hh;
    t.mm = t1.mm + t2.mm;

    if(t.mm > 60)
    {
      t.hh = t.hh + (t.mm / 60);
      t.mm = t.mm % 60;
    }

   return t;
 }

void main()
{
   time t1,t2,t3;

   t1.set();
   t2.set();

   t3 = add(t1,t2);

   t3.display();

   getch();
}