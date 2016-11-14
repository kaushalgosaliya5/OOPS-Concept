#include<iostream.h>
#include<conio.h>

void main()
{
  int *p;

  p = new int;

  cout << "\n enter number :: ";
  cin >> *p;

  cout << "\n your number is :: " << *p;

  getch();
}