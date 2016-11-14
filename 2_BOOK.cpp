#include<iostream.h>
#include<conio.h>

class book
{
  char name[10];
  int price;
  int pages;

  public:

  book()
  {
    price = 0;
    pages = 0;
  }

  void set()
  {
    cout << "\n enter book name :: ";
    cin >> name;

    cout << "\n enter price :: ";
    cin >> price;

    cout << "\n enter pages :: ";
    cin >> pages;
  }

  void show()
  {
    cout << "\n  " << name << "    " << price << "     " << pages;
  }
};


void main()
{
  book b;

  b.set();

 cout << "\n name   price   pages";

  b.show();

 getch();
}