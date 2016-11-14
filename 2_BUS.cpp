#include<iostream.h>
#include<conio.h>

class bus
{
  protected:

  int bno;
  char dname[10];
  int  cap;
  char coatch;

  public:

  void set1()
  {
    cout << "\n enter bus number :: ";
    cin >> bno;

    cout << "\n enter driver name :: ";
    cin >> dname;

    cout << "\n enter setting capacity :: ";
    cin >> cap;

    cout << "\n enter coatching AC or NON-AC (Y / N) :: ";
    cin >> coatch;
  }
};

class travel : public bus
{
  char pname[10];
  int distence;

  public:

  void set2()
  {
    cout << "\n enter person name :: ";
    cin >> pname;

    cout << "\n enter distence traveling km :: ";
    cin >> distence;
  }

  void show2()
  {
    if(coatch == 'y' || coatch == 'Y')
     {
       cout << "\n your bill is :: " << (distence * 7.5) + ((distence * 7.5) * 0.095);
     }
    else if(coatch == 'N' || coatch == 'n')
     {
       cout << "\n your bill is :: " << (distence * 5.5) + ((distence * 5.5) * 0.095);
     }
    else
     {
       cout << "\n your coatching choice is worng ";
     }
  }
};

void main()
{
  travel a;

  a.set1();
  a.set2();

  a.show2();

 getch();
}