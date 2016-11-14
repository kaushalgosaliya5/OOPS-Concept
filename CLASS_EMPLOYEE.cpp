#include<stdio.h>
#include<iostream.h>

class employee
{
  private :

  int id,sal;
  char des[10];

  public :

  void set();
  void camition();
};

void employee :: set()
{
   cout << "enter employee id :: ";
   cin >> id;

   cout << "enter designation :: ";
   cin >> des;

   cout << "enter employee sallary :: ";
   cin >> sal;
}

void employee :: camition()
{
  if(des[0] == 'm')
  {
    cout << "\n camition is :: " << sal*0.10;
  }
  else if(des[0] == 'o')
  {
    cout << "\n camition is ::" << sal*0.05;
  }
  else
  {
    cout << "\n camition is :: " << sal*0.02;
  }
}

void main()
{
  employee e;

  e.set();
  e.camition();

  scanf("%d");
}
