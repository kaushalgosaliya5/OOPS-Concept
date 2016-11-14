#include<iostream.h>
#include<conio.h>

class publisher
{
   protected:

   char title[20];

   public:

   void set1()
   {
     cout << "\n\n enter title of book :: ";
     cin >> title;
   }

   void show1()
   {
     cout << "\n book title is :: " << title;
   }
};

class book : public publisher
{
  int pages;

  public:

  void set2()
  {
    set1();
    cout << "\n\n enter number of pages :: ";
    cin >> pages;
  }

  void show2()
  {
    show1();
    cout << "\n\n total number of pages is :: " << pages;
  }
};

class cd : public publisher
{
   int mm;

   public:

   void set3()
   {
     set1();
     cout << "\n enter duration of cd :: ";
     cin >> mm;
   }

   void show3()
   {
     show1();
     cout << "\n\n total duration is :: " << mm;
   }
};

void main()
{
   book b;
   cd c;

   b.set2();
   b.show2();

   c.set3();
   c.show3();

 getch();
}