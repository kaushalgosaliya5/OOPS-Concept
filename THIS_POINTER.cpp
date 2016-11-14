#include<iostream.h>
#include<conio.h>

class person
{
  int age;
  char name[10];

  public:

  void set()
  {
     cout << "\n enter age :: ";
     cin >> age;

     cout << "\n enter name :: ";
     cin >> name;
  }

  person large(person p4)
  {
    if(age > p4.age)
    {
      return(*this);
    }
    else
    {
      return(p4);
    }
  }

  void show()
  {
    cout << "\n this person is olden one \n";
    cout << "\n name is :: " << name;
    cout << "\n age is :: " << age;
  }
};

void main()
{
  person p1,p2,p3;

  cout << "\n larger than age \n";

  p1.set();
  p2.set();

  p3 = p1.large(p2);

  p3.show();

  getch();
}