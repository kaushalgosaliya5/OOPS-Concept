#include<iostream.h>
#include<conio.h>

class item1
{
  int id;
  int qty;
  int price;

  public:

  void set()
  {
    cout << "\n enter item 1 id :: ";
    cin >> id;

    cout << "\n enter item 1 quetity :: ";
    cin >> qty;

    cout << "\n enter item 1 price :: ";
    cin >> price;
  }

   int getx()
   {
     return id;
   }

   int gety()
   {
     return qty;
   }

   int getz()
   {
     return price;
   }
};

class item2
{
  int id;
  int amt;

  public:

  item2(item1 x)
  {
     id = x.getx();
     amt = x.gety() * x.getz();
  }

  void show()
  {
    cout << "\n item2 id :: " << id;
    cout << "\n item2 amount is :: " << amt;
  }
};


void main()
{
  item1 a;

  a.set();

  item2 b = a;

  b.show();

 getch();
}