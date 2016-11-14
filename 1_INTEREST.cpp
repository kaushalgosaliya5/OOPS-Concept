#include<iostream.h>
#include<conio.h>
#include<math.h>

int cals_interest(int p,float r,int n);
float cals_interest(int p,int n,float r);

void main()
{
  int p,n;
  float r;

  cout << "\n enter value of principal amount :: ";
  cin >> p;

  cout << "\n enter value of rate of interest :: ";
  cin >> r;

  cout << "\n etner value of number of year :: ";
  cin >> n;

  cout << "\n your ans is :: " << cals_interest(p,r,n);
  cout << "\n your ans is :: " << cals_interest(p,n,r);

  getch();
}

int cals_interest(int p,float r,int n)
{
   return (p*r*n) / 100;
}

float cals_interest(int p,int n,float r)
{
   int i;
   float ans=0,pi=0;

   for(i=1;i<=n;i++)
   {
     pi = (p*r) / 100;
     p = pi + p;
     ans = ans + pi;
   }

  return ans;
}