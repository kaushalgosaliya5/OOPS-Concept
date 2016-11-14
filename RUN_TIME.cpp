#include<iostream.h>
#include<conio.h>

class shape
{
  protected:

  int x,y;

  public:

  virtual void set()
  {

  }
  virtual void show()
  {

  }
};

class square : public shape
{
  public:

  void set()
  {
    cout << "\n enter length of square :: ";
    cin >> x;
  }

  void show()
  {
    cout << "\n area of square is :: " << x * x;
  }
};

class triangle : public shape
{
  public:

  void set()
  {
    cout << "\n enter base :: ";
    cin >> x;

    cout << "\n enter heigth :: ";
    cin >> y;
  }

  void show()
  {
    cout << "\n area of triangle is :: " <<  0.5 * x * y;
  }
};


void main()
{
  square s1;
  triangle t1;

  shape *x;

  x = &t1;  // or x = &s1;

  x -> set();
  x -> show();

 getch();
}