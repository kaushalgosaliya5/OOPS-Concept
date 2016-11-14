#include<iostream.h>
#include<conio.h>

class bus
{
  protected:

  int no;
  char dname[10];
  int cap;
  char ac;

  public:

  void set1()
  {
    cout << "\n enter bus number :: ";
    cin >> no;

    cout << "\n enter driver name :: ";
    cin >> dname;

    cout << "\n enter capasity :: ";
    cin >> cap;

    cout << "\n enter ac or not (y/n) :: ";
    cin >> ac;
  }
};

class travel : public bus
{
   char name[10];
   int dis;
   float bill;

   public :

   void set2()
   {
     set1();

     cout << "\n enter person name :: ";
     cin >> name;

     cout << "\n enter distence total km :: ";
     cin >> dis;
   }

   void show()
   {
     if(ac == 'y' || ac == 'Y')
     {
       bill = (dis * 7.5) + (dis * 7.5 * 0.095);
     }
     else
     {
       bill = (dis * 5.5) + (dis * 5.5 * 0.095);
     }

     cout << "\n total bill is :: " << bill;
   }
};

void main()
{
  travel t;

  t.set2();
  t.show();

  getch();
}