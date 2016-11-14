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
      cout << "\n enter value " << i+1 << " :: ";
      cin >> x[i];
    }
  }

  void show()
  {
    cout << "\n your new value is :: \n\n";

    for(int i=0;i < 10;i++)
    {
      cout << x[i] << " ";
    }
  }

  number operator *(int p)
  {
    number tmp;

    for(int i=0;i<10;i++)
    {
      tmp.x[i] = x[i] * p;
    }

    return tmp;
  }
};


void main()
{
  number n1,n2;

  n1.set();

  n2 = n1 * 5;

  n2.show();

  getch();
}