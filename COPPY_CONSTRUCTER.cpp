#include<iostream.h>
#include<conio.h>

class sample
{
  int x;

  public:

  sample()
  {
    cout << "\n enter value of x is :: ";
    cin >> x;
  }

  sample(sample &s1)
   {
     x = s1.x;
   }


  void show()
  {
    cout << "\n your value of x is :: " << x;
  }
};


void main()
{
   sample s1,s2(s1),s3=s1;

   s1.show();
   s2.show();
   s3.show();


  getch();
}