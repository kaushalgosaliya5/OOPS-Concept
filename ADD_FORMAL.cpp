#include<stdio.h>
#include<iostream.h>

//void add(int =5,int =15,int =25);
void add(int x=5,int y=15,int z=25);

void main()
{
  int x=10,y=20,z=30;

  add(x,y,z);
  add(x,y);
  add(x);
  add();

  scanf("%d");
}

void add(int a,int b,int c)
{
  cout << "your ans is :: " << a+b+c << endl;
}

