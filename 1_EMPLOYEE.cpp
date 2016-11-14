#include<iostream.h>
#include<conio.h>

class employee
{
  char name[10];
  char des[10];
  int sal;

  public:

  void set();
  void get();
};

void employee :: set()
{
   cout << "\n enter employee name :: ";
   cin >> name;

   cout << "\n enter employee designation :: ";
   cin >> des;

   cout << "\n enter employee sallary :: ";
   cin >> sal;
}

void employee :: get()
{
   if(des[0] == 'm' || des[0] == 'M')
   {
     cout << "\n commition is :: " << sal * 0.10;
   }
   else if(des[0] == '0' || des[0] == 'O')
   {
     cout << "\n commition is :: " << sal * 0.05;
   }
   else
   {
     cout << "\n commition is :: " << sal * 0.02;
   }
}

void main()
{
  employee e;

  e.set();
  e.get();

  getch();
}