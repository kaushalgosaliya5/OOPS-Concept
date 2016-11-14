#include<iostream.h>
#include<conio.h>

class sample
{
   int x;
   static int cnt;

   public:

   void set()
   {
     cout << "\n enter value :: ";
     cin >> x;

     cnt++;
   }

   static void setcount()
   {
     cout << "\n your total count is :: " << cnt;
   }
};

int sample :: cnt;

void main()
{
  sample s1,s2,s3;

  s1.set();
  s2.set();
  s3.set();

  sample :: setcount();

  getch();
}