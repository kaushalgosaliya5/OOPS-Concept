#include<iostream.h>
#include<conio.h>


class rupee
{
  int x;
  int y;

  public:

  void set()
  {
    cout << "\n enter rupee :: ";
    cin >> x;

    cout << "\n enter doller :: ";
    cin >> y;
  }

  void get()
  {
    cout << "\n total ruppes is :: " << x + (y * 60);
    cout << "\n total doller is :: " << y + (x / 60);
  }
};

void main()
{
  rupee z;

  z.set();
  z.get();

  getch();
}
