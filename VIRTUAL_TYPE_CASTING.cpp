#include<iostream.h>
#include<conio.h>

class a
{
  public:

  void display()
  {
     cout << "\n subhash love india ";
  }
};

class b : public a
{
  public:

  void display()
  {
    cout << "\n subhash love mashala dosha";
  }
};

void main()
{
  a a1;
  b b1;

  a *k;
  k = &b1;
  k -> display();

 ((b *)k)->display();   // type casting........

  getch();
}