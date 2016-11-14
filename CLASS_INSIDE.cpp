#include<stdio.h>
#include<iostream.h>

class number
{
  private :

  int x;
  int y;

  public:

  void set()
  {
    cout << "enter value of x :: ";
    cin >> x;

    cout << "enter value of y :: ";
    cin >> y;
  }

  void get()
  {
    cout << "value of x is :: " << x << endl;
    cout << "value of y is :: " << y << endl;
  }
};

void main()
{
  number n1;

  cout << "node 1 :: \n";
  n1.set();
  n1.get();

  number n2;

  cout << "node 2 :: \n";
  n2.set();
  n2.get();

  scanf("%d");
}
