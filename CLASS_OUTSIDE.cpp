#include<stdio.h>
#include<iostream.h>

class rectangal
{
  private:

  int length,width;

  public:

  void set();
  void area();
};

void rectangal :: set()
{
  cout << "\n enter value of length :: ";
  cin >> length;

  cout << "\n enter value of wedth :: ";
  cin >> width;
}

void rectangal :: area()
{
  cout << "\n area of rectangal is :: " << length * width;
}

void main()
{
  rectangal r;

  r.set();
  r.area();

  scanf("%d");
}