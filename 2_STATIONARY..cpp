#include<iostream.h>
#include<conio.h>

class stationary
{
  int *id;
  char *name;
  int *price;

  public:

  stationary()
  {
    id = new int;
    name = new char[10];
    price = new int;
  }

  void set()
  {
    cout << "\n enter item id :: ";
    cin >> *id;

    cout << "\n enter item name :: ";
    cin >> name;

    cout << "\n enter item price :: ";
    cin >> *price;
  }

  void show()
  {
    cout << "\n   " << *id << "   " << name << "   " << *price;
  }

  ~stationary()
   {
     delete id;
     delete [] name;
     delete price;
   }
};

void main()
{
  stationary s1,s2,s3;

  s1.set();
  s2.set();
  s3.set();

  cout << "\n id    name    price" << endl;

  s1.show();
  s2.show();
  s3.show();

 getch();
}