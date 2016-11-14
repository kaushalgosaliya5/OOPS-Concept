#include<iostream.h>
#include<conio.h>

class time
{
  int hh,mm;

  public:

  void set()
  {
    cout << "\n enter value of hh :: ";
    cin >> hh;

    cout << "\n enter value of mm :: ";
    cin >> mm;
  }

  void show()
  {
    cout << "\n your hh :: mm is  :: " << hh << " : " << mm;
  }

  friend time add(time t1,time t2);
};

 time add(time t1,time t2)
 {
   time tmp;

   tmp.hh = t1.hh + t2.hh;
   tmp.mm = t1.mm + t2.mm;

   if(tmp.mm >= 60)
   {
      tmp.hh = tmp.hh + (tmp.mm / 60);
      tmp.mm = tmp.mm % 60;
   }

   return tmp;
 }

void main()
{
  time t1,t2,t3;

  t1.set();
  t2.set();

  t3 = add(t1,t2);

  t3.show();

  getch();
}
