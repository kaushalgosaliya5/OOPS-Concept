#include<iostream.h>
#include<conio.h>

double power(double m,int n=2);

void main()
{
  double m,ans;
  int n;

  cout << "\n value of base :: ";
  cin >> m;

  cout << "\n value of exponenet :: ";
  cin >> n;

  ans = power(m,n);

  cout << "\n 1. your value is :: " << ans;

  ans = power(m);

  cout << "\n 2. your value is :: " << ans;

  getch();
}

double power(double m,int n)
{
  int i;
  int p=1;

  for(i=1;i<=n;i++)
  {
    p = p * m;
  }

  return p;
}