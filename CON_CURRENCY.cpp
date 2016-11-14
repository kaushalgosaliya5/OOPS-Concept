#include<iostream.h>
#include<conio.h>

class currency
{
   int r,p;

   public:

   currency(int i,int j)
   {
     r = i;
     p = j;
   }

   currency()
   {
     r = 0;
     p = 0;
   }

   void show()
   {
      cout << "\n new currency is  :: " << r << " :: " << p;
   }

   friend currency add(currency,currency);
};

currency add(currency c1,currency c2)
{
   currency c;

   c.r = c1.r + c2.r;
   c.p = c1.p + c2.p;

   if(c.p > 100)
   {
      c.r = c.r + (c.p / 100);
      c.p = c.p % 100;
   }

   return c;
}

void main()
{
   int r1,p1,r2,p2;

   cout << "\n first :: ";
   cout << "\n ruppess :: ";
   cin >> r1;
   cout << "\n paisha :: ";
   cin >> p1;

   cout << "\n second :: ";
   cout << "\n rupeess :: ";
   cin >> r2;
   cout << "\n paisha :: ";
   cin >> p2;

   currency c1(r1,p1),c2(r2,p2),c3;

   c3 = add(c1,c2);

   c3.show();

   getch();
}