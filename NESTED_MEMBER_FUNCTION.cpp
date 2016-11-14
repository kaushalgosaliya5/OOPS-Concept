#include<iostream.h>
#include<conio.h>

class rectangle
{
   int l,w;

   public:

   void set()
   {
     cout << "\n enter length of rectangle :: ";
     cin >> l;

     cout << "\n entr width of rectangle :: ";
     cin >> w;
   }

   int area()
   {
     return l * w;
   }

   void display()
   {
     cout << "\n your rectangle area is :: " << area();
   }
};

void main()
{
  rectangle r;

  r.set();
  r.display();

  getch();
}

