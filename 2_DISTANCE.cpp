#include<iostream.h>
#include<conio.h>

class distance
{
  int feet;
  int inches;

  public:

  distance()
  {
    feet = 10;
    inches = 30;
  }

  distance(int x,int y)
  {
     feet = x;
     inches = y;
  }

  distance(distance &d)
  {
    feet = d.feet;
    inches = d.inches;
  }

  void show()
  {
    cout << "\n feet : inches  :: " << feet << " :: " << inches;
  }
};

void main()
{
  distance d1,d2(20,50),d3(d1);

  d1.show();
  d2.show();
  d3.show();

 getch();
}