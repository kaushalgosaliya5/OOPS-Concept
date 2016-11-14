#include<stdio.h>
#include<iostream.h>

void print(char x='*',int y=10);

void main()
{
  char x;
  int y;

  cout << "enter your sine :: ";
  cin >> x;

  cout << "enter number of time :: ";
  cin >> y;

  print(x,y);
  print(x);
  print();

  scanf("%d");
}

void print(char x,int y)
{
  int i;

  for(i=0;i<y;i++)
  {
    cout << x << " ";
  }

  cout << "\n";
}