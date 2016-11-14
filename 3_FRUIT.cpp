#include<iostream.h>
#include<conio.h>


class fruit
{
  protected:

  char shape[10];
  char color[10];

  public:

  void xset()
  {
    cout << "\n enter fruit shape :: ";
    cin >> shape;

    cout << "\n enter fruit color :: ";
    cin >> color;
  }

  void xshow()
  {
    cout << "\n shape is :: " << shape;
    cout << "\n color is :: " << color;
  }
};

class apple : public fruit
{
  public:

  void show()
  {
    cout << "\n apple give vitamin :: A ";
    cout << "\n apple is not a parstion";
  }
};

class orange : public fruit
{
  public:

  void show()
  {
    cout << "\n orange give vitamin :: C";
    cout << "\n orange is a parstion";
  }
};


void main()
{
  int ch;
  apple a1;
  orange o1;

  cout << "\n |----- menu -----|";
  cout << "\n   1. APPLE ";
  cout << "\n   2. BANANA ";
  cout << "\n |-----------------|";

  cout << "\n enter your choice :: ";
  cin >> ch;

  if(ch == 1)
  {
    a1.xset();
    a1.xshow();
    a1.show();
  }
  else if(ch == 2)
  {
     o1.xset();
     o1.xshow();
     o1.show();
  }
  else
  {
     cout << "\n your choice is wrong";
  }

 getch();
}