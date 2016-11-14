#include<stdio.h>
#include<iostream.h>

int power(int x,int y=2);

void main()
{
  int x,y;

  cout << "enter base :: ";
  cin >> x;

  cout << "enter exponent :: ";
  cin >> y;

  cout << power(x,y) << endl;
  cout << power(x);

 scanf("%d");
}

int power(int x,int y)
{
  int i,ans=1;

  for(i=0;i<y;i++)
  {
    ans = ans * x;
  }

  return ans;
}



