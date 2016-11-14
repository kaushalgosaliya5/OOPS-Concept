#include<iostream.h>
#include<conio.h>

class y;
class x
{
   int a;

   public:

   void set()
   {
      cout << "\n enter value of a :: ";
      cin >> a;
   }

   friend class y;
};

class y
{
   int b;

   public:

   void set()
   {
      cout << "\n enter value of b :: ";
      cin >> b;
   }

  void mul(x x1)
  {
    cout << "\n your ans is :: " << b * x1.a;
  }

  friend class x;
};

void main()
{
   x   x2;
   y   y2;

   x2.set();
   y2.set();

   y2.mul(x2);

   getch();
}