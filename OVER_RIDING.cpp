#include<iostream.h>
#include<conio.h>

class b
{
  protected:

  int x;

  public:

  void set()
  {
    cout << "\n enter value of x :: ";
    cin >> x;

    cout << "\n value of x is :: " << x;
  }
};

class d : public b
{
   int y;

   public:

   void set()
   {
     cout << "\n enter value of y :: ";
     cin >> y;

     cout << "\n value of y is :: " << y;
   }
};

void main()
{
   d d1;

   d1.b :: set();  // this is called over-riding of function........

   d1.set();

 getch();
}