#include<iostream.h>
#include<conio.h>

class distance
{
  int feet,inches;

  public:

  void set()
  {
    cout << "\n enter feet :: ";
    cin >> feet;

    cout << "\n enter inches :: ";
    cin >> inches;
  }

  void show()
  {
    cout << "\n feet : inches  :: " << feet << " : " << inches;
  }

  distance operator +(distance d2)
  {
    distance tmp;

    tmp.feet = feet + d2.feet;
    tmp.inches = inches + d2.inches;

    return tmp;
  }
};

void main()
{
  distance d1,d2,d3;

  d1.set();
  d2.set();

  d3 = d1 + d2;

  d3.show();

  getch();
}