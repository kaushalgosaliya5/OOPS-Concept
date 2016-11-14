#include<iostream.h>
#include<conio.h>

class sample
{
  int x,y;

  public:

  sample(int i=10,int j=20)
  {
    x = i;
    y = j;
  }

  void show()
  {
    cout << "\n\n value of x is :: " << x;
    cout << "\n value of y is :: " << y;
  }
};

void main()
{
  sample s1,s2(1),s3(2,3);

  s1.show();
  s2.show();
  s3.show();

  getch();
}