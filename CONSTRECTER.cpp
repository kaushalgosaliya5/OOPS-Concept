#include<iostream.h>
#include<conio.h>

class sample
{
   int x;

   public:

   sample()
   {
     x = 5;
   }

   void show()
   {
     cout << "\n value of x is :: " << x;
   }
};

void main()
{
  sample s;

  s.show();

  getch();
}