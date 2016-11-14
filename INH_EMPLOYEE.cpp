#include<iostream.h>
#include<conio.h>

class employee
{
  protected:

  int eid;
  char name[10];
  int bsal;

  public:

  void set1()
  {
    cout << "\n enter employee id :: ";
    cin >> eid;

    cout << "\n enter employee name :: ";
    cin >> name;

    cout << "\n enter basic sallary :: ";
    cin >> bsal;
  }
};

class allounce
{
  protected:

   int da;
   int hra;
   int ta;

   public:

   void set2()
   {
     cout << "\n enter dearness allounce (DA) :: ";
     cin >> da;

     cout << "\n enter house rent allounce (HRA) :: ";
     cin >> hra;

     cout << "\n enter travelling allounce (TA) :: ";
     cin >> ta;
   }
 };

class sallary : public employee,public allounce
 {
   int nsal;

   public:

   void set()
   {
     set1();
     set2();
   }

   void show()
   {
     nsal = bsal + ((bsal * da) / 100) + ((bsal * hra) / 100) + ((bsal * ta) / 100);

     cout << "\n employee NET SALLERY is :: " << nsal;
   }
};



void main()
{
  sallary s;

  s.set();
  s.show();

 getch();
}