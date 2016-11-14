#include<stdio.h>
#include<iostream.h>

class bigger
{
   private :

   int x,y;

   public:

   void set();
   void large();
};

void bigger :: set()
{
  cout << "enter value of x :: ";
  cin >> x;

  cout << "enter value of y :: ";
  cin >> y;
}

void bigger :: large()
{
   if(x>y)
   {
     cout << "large number is x ::" << x;
   }
  else
   {
     cout << "large number is y :: " << y;
   }
}

void main()
{
  bigger l;

  l.set();
  l.large();

  scanf("%d");
}