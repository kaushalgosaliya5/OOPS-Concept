#include<iostream.h>
#include<typeinfo.h>
#include<conio.h>

void main()
{
  int x;
  float y;
  double z;

  cout << "\n YOUR  variable TYPE is :: " <<  typeid(x).name();
  cout << "\n YOUR  variable TYPE is :: " <<  typeid(y).name();
  cout << "\n YOUR  variable TYPE is :: " <<  typeid(z).name();

  getch();
}