#include<iostream.h>
#include<conio.h>

class staff
{
  protected:

   int code;
   char name[10];

  public:

  void set1()
  {
    cout << "\n enter staff code :: ";
    cin >> code;

    cout << "\n enter staff name :: ";
    cin >> name;
  }

  void show1()
  {
    cout << "\n code :: " << code;
    cout << "\n name :: " << name;
  }
};

class teacher : public staff
{
  char sub[10];
  char pub[10];

  public:

  void set2()
  {
    cout << "\n enter subject name :: ";
    cin >> sub;

    cout << "\n enter publisher name :: ";
    cin >> pub;
  }

  void show2()
  {
    cout << "\n subject is :: " << sub;
    cout << "\n publisher is :: " << pub;
  }
};

class officer : public staff
{
  char grade;

  public:

  void set3()
  {
     cout << "\n enter grade :: ";
     cin >> grade;
  }

  void show3()
  {
    cout << "\n grade is :: " << grade;
  }
};


void main()
{
  staff s1;
  teacher t1;
  officer o1;

  s1.set1();
  t1.set2();
  o1.set3();

  s1.show1();
  t1.show2();
  o1.show3();

 getch();
}