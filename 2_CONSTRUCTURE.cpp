#include<iostream.h>
#include<conio.h>

class sample
{
  char name[10];
  float age;
  float weight;

  public:

  sample()
  {
    cout << "\n enter name :: ";
    cin >> name;

    cout << "\n enter age :: ";
    cin >> age;

    cout << "\n enter weigth :: ";
    cin >> weight;
  }

  ~sample()
  {
   cout << "\n name is :: " << name;
   cout << "\n age is  :: " << age;
   cout << "\n weight is :: " << weight;
   getch();
  }
};

void main()
{
  sample s;
}