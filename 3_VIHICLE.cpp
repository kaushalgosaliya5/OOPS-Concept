#include<iostream.h>
#include<conio.h>

class l
{
  protected:

  int lno;
  char name[10];
  char state[10];

  public:

  void lset()
  {
    cout << "\n enter licence number :: ";
    cin >> lno;

    cout << "\n enter your name :: ";
    cin >> name;

    cout << "\n enter state name :: ";
    cin >> state;
  }

  void virtual show()
  {
  }
};

class t : public l
{
   char type[10];

   public:

   void set()
   {
     cout << "\n enter type (GEAR / NON-GEAR / BOTH) : (G/N/B) :: ";
     cin >> type;
   }

   void show()
   {
     cout << "\n l.no   name    state   type ";
     cout << "\n   " << lno << "   " << name << "   " << state << "    " << type;
   }
};

class f : public l
{
   char type[10];

   public:

   void set()
   {
     cout << "\n enter type (LMV / HMV / BOTH) : (L/H/B) :: ";
     cin >> type;
   }

   void show()
   {
     cout << "\n l.no   name    state   type ";
     cout << "\n  " << lno << "   " << name << "   " << state << "    " << type;
   }
};


void main()
{
   l *l1;
   t t1;
   f f1;
   int ch;

  cout << "\n |-------- menu -------|";
  cout << "\n     1. TWO WHEELER  ";
  cout << "\n     2. FOUR WHEELER ";
  cout << "\n |---------------------|";

  cout << "\n enter choice :: ";
  cin >> ch;

  if(ch == 1)
  {
    l1 = &t1;
    l1 -> lset();
    t1.set();
    l1 -> show();
  }
  else if(ch == 2)
  {
    l1 = &f1;
    l1 -> lset();
    f1.set();
    l1 -> show();
  }
  else
  {
    cout << "\n your choice is wrong";
  }

 getch();
}

