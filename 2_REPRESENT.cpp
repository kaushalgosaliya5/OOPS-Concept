#include<iostream.h>
#include<conio.h>

class sample
{
  int x[10];
  int n,i,p,q;

  public:

  void set()
  {
     for(i=0;i<10;i++)
     {
       cout << "\n enter your value :: ";
       cin >> x[i];
     }
  }

  void modify()
  {
     cout << "\n enter which number modify :: ";
     cin >> p;

     cout << "\n enter new value :: ";
     cin >> q;

     for(i=0;i<10;i++)
     {
       if(x[i] == p)
        {
          x[i] = q;
        }
       if(i == 10)
        {
          cout << "\n your modify number is wrong";
        }
     }
  }

  void display()
  {
    cout << "\n enter which number multipliye :: ";
    cin >> n;

    for(i=0;i<10;i++)
    {
       cout << x[i] * n << " --> ";
    }
  }
};

void main()
{
  sample s;

  s.set();
  s.modify();
  s.display();

  getch();
}