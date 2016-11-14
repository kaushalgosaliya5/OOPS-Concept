#include<iostream.h>
#include<conio.h>

void main()
{
  int *p;
  int i;

  p = new int[5];

  for(i=0;i<5;i++)
  {
    cout << "\n enter value :: ";
    cin >> p[i];
  }

  for(i=0;i<5;i++)
  {
    cout << p[i] << endl;
  }


  delete p;  // de-allocation of this memeory......

  getch();
}