#include<iostream.h>
#include<conio.h>

class rectangle
{
  public:

  class distance
  {
     int feet,inches;

     public:

     void set1()
     {
        cout << "\n enter feet :: ";
        cin >> feet;

        cout << "\n enter inches :: ";
        cin >> inches;
     }

     void get1()
     {
       cout << "\n your ans is :: " << feet << " : " << inches;
     }
  };

  private:

  distance length,width;

  public:

  void set()
  {
    cout << "\n enter length :: ";
    length.set1();

    cout << "\n enter width :: ";
    width.set1();
  }

  void get()
  {
    cout << "\n your length is :: ";
    length.get1();

    cout << "\n your width is :: ";
    width.get1();
  }
};

void main()
{
  rectangle r;

  r.set();
  r.get();

  getch();
}
