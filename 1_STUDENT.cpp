#include<iostream.h>
#include<conio.h>

class student
{
  int rollno;
  char name[10];
  float age;

  public:

  void set();
  void get();
};

void student :: set()
{
  cout << "\n enter student rollno :: ";
  cin >> rollno;

  cout << "\n enter student name :: ";
  cin >> name;

  cout <<"\n enter student age :: ";
  cin >> age;
}

void student :: get()
{
  cout << "\n ROLLNO   NAME     AGE";
  cout << "\n " << rollno << "    " << name << "   " << age;
}

void main()
{
  student s;

  s.set();
  s.get();

  getch();
}