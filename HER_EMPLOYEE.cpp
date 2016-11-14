#include<iostream.h>
#include<conio.h>

class employee
{
  protected:

  int eid;
  char name[10];
  int scale;

  public:

  void set()
  {
    cout << "\n enter employee id :: ";
    cin >> eid;

    cout << "\n enter employee name :: ";
    cin >> name;

    cout << "\n enter scale of per hourse :: ";
    cin >> scale;
  }
};

class male : public employee
{
  protected:

   int hrs;
   int sal;

   public:

   void set1()
   {
     set();

     cout << "\n enter male employee horse :: ";
     cin >> hrs;

     cout << "\n your sallary is :: " << hrs * scale;
   }
};

class female : public employee
{
   int sal;

   public:

   void set2()
   {
     set();

     cout << "\n your sallary is :: " << 40 * scale;
   }
};

void main()
{
   male m;
   female f;
   char g;

   cout << "\n enter gender ( M / F ):: ";
   cin >> g;

   if(g == 'M' || g == 'm')
   {
     m.set1();
   }
   else if(g == 'F' || g == 'f')
   {
     f.set2();
   }
   else
   {
     cout << "\n your gender is worng";
   }

 getch();
}

