#include<iostream.h>
#include<conio.h>

class student
{
  protected:

  char name[10];

  public:

  char sch;

  public:

  void set1()
  {
    cout << "\n enter your name :: ";
    cin >> name;

    cout << "\n you are achive sholer-ship (Y / N) :: ";
    cin >> sch;
  }
};

class s : public student
{
   int h;
   char hostel;

   public:

   s()
   {
     h = 5000;
   }

   void set()
   {
      cout << "\n you are staying in hostel [Y/N] :: ";
      cin >> hostel;
   }

   void show()
   {
      if(hostel == 'Y' || hostel == 'y')
      {
        cout << "\n total fees :: " << h;
      }
      else
      {
        cout << "\n YOU ARE NOT PAY ANY FEES ";
      }
   }
};

class ns : public student
{
   int h;
   int c;
   char hostel;

   public:

   ns()
   {
      c = 1500;
      h = 5000;
   }

   void set()
   {
     cout << "\n you are staying in hostel :: ";
     cin >> hostel;
   }

   void show()
   {
     if(hostel == 'Y' || hostel == 'y')
     {
       cout << "\n total fees :: " << h+c;
     }
     else
     {
       cout << "\n total fees :: " << c;
     }
   }
};


void main()
{
  student s1;

  s1.set1();

  if(s1.sch == 'y' || s1.sch == 'Y')
  {
    s p;

    p.set();
    p.show();
  }
  else
  {
     ns p;

     p.set();
     p.show();
  }

 getch();
}