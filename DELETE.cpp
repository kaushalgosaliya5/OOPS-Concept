#include<iostream.h>
#include<conio.h>

void main()
{
  int *p;
  int i;

  p = new int[5];

  for(i=0;i<5;i++)
  {
    cout << "\n enter your value of p :: ";
    cin >> p[i];
  }

  for(i=0;i<5;i++)
  {
    cout << "\n value of p is :: " << p[i];
  }

  delete [5]p;

 getch();
}