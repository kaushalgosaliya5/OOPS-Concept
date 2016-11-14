#include<iostream.h>
#include<conio.h>

class number
{
   int x;

   public:

   void set()
   {
      cout << "\n enter value of x :: ";
      cin >> x;
   }

   void show()
   {
     cout << "\n value of x is :: " << x;
   }

   number operator ++() // prefix operation.........
   {
     number tmp;

     cout << "\n prefix ++x \n";

     tmp.x = ++x;

     return tmp;
   }

  number operator ++(int) // postfix expresstion........
   {
     number tmp;

     cout << "\n postfix x++ \n";

     tmp.x = x++;

     return tmp;
   }

};

void main()
{
   number n1,n2;

   n1.set();

   n2 = ++n1;  // n2 = n1++;

   n2.show();

  getch();
}