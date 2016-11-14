#include<stdio.h>
#include<iostream.h>

int add(int,int);
int add(int,int,int);
int add(int,int,int,int);

void main()
{
  cout << "first is :: " << add(5,10) << endl;
  cout << "second is :: " << add(10,50,30) << endl;
  cout << "third is ::" << add(20,50,40,30);

  scanf("%d");
}

int add(int p,int q)
{
  return p + q;
}

int add(int p,int q,int r)
{
  return p + q + r;
}

int add(int p,int q,int r,int s)
{
  return p + q + r + s;
}
