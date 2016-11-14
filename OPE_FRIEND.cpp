#include<iostream.h>
#include<conio.h>

class number
{
  int x[10];

  public:

  void set()
  {
    for(int i=0;i<10;i++)
    {
      cout << "\n enter value :: ";
      cin >> x[i];
    }
  }

  void show()
  {
    cout << "\n your new number  is :: \n\n";

    for(int i=0;i<10;i++)
    {
      cout << x[i] << " ";
    }
  }

  friend void operator *(number &n1,int x);
  friend void operator *(int x,number &n1);
};

 void operator *(number &n1,int p)
 {
   for(int i=0;i<10;i++)
   {
     n1.x[i] = n1.x[i] * p;
   }
   cout << "\n hy";
 }

 void operator *(int p,number &n1)
 {
    for(int i=0;i<10;i++)
    {
      n1.x[i] = n1.x[i] * p;
    }
    cout << "\n hello";
 }

void main()
{
  number n1;

  n1.set();

  5 * n1;  // OR ..>   n1 * 5;

  n1.show();

 getch();
}