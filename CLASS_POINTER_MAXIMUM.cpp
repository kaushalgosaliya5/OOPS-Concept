#include<iostream.h>
#include<conio.h>

class large
{
  int x[10];

  public:

  void set();
  void display();
};

void large :: set()
{
  int i;

  for(i=0;i<10;i++)
  {
    cout << "\n enter value :: ";
    cin >> x[i];
  }
}

void large :: display()
{
  int i,max;

  max = x[0];

  for(i=0;i<10;i++)
  {
     if(x[i] > max)
     {
       max = x[i];
     }
  }

 cout << "\n your maximum value is :: " << max;
}

void main()
{
  large m,*l;

  l = &m;

  l -> set();
  l -> display();

  getch();
}
