#include<iostream.h>
#include<conio.h>
#include<math.h>

class vector
{
  int x[5];

  public:

  void set()
  {
    for(int i;i<5;i++)
    {
      cout << "\n enter value :: ";
      cin >> x[i];
    }
  }

  operator double()
  {
    int sum=0;
    double ans;

    for(int i=0;i<5;i++)
    {
      sum = sum + (x[i]*x[i]);
    }

    ans = sqrt(sum);

    return ans;
  }
};

void main()
{
  vector v1;

  v1.set();

  double d = v1;

  cout << "\n  convert to double :: " << d;

 getch();
}