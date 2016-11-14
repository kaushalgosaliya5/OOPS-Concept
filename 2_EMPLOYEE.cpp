#include<iostream.h>
#include<conio.h>

class employee
{
  char name[10];
  int hrs;
  int rate;

  public:

  employee()
  {
    rate = 50;
  }

  void set()
  {
    cout << "\n enter employee name :: ";
    cin >> name;

    cout << "\n enter number of works :: ";
    cin >> hrs;
  }

  void show()
  {
    cout << "\n " << name << "  " << hrs << "  " << hrs * rate;
  }
};

void main()
{
  employee e[5];
  int i;

  for(i=0;i<5;i++)
  {
    e[i].set();
  }

  cout << "\n name   hrs   sallary";

  for(i=0;i<5;i++)
  {
    e[i].show();
  }

 getch();
}