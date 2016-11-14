#include<iostream.h>
#include<conio.h>

class b
{
  protected:

  int x;

  public:

  void setx()
  {
    cout << "\n enter value of x :: ";
    cin >> x;
  }

  void showx()
  {
    cout << "\n value of x is :: " << x;
  }
};

class d1 : virtual public b          // single copy of class b.......(virtual)
{
   protected:

   int y;

   public:

   void sety()
   {
     cout << "\n enter value of y :: ";
     cin >> y;
   }

   void showy()
   {
     cout << "\n value of y is :: " << y;
   }
};


class d2 : virtual public b   // single copy of class b.......(virtual)
{
  protected:

  int z;

  public:

  void setz()
  {
    cout << "\n enter value of z :: ";
    cin >> z;
  }

  void showz()
  {
    cout << "\n value of z is :: " << z;
  }
};

class d3 : public d1,public d2
{
  int i;

  public:

  void seti()
  {
    setx();
    sety();
    setz();
    cout << "\n enter value of i :: ";
    cin >> i;
  }

  void showi()
  {
    showx();
    showy();
    showz();
    cout << "\n value of i is :: " << i;
  }
};

void main()
{
  d3 a;

  a.seti();
  a.showi();

 getch();
}