#include<conio.h>
#include<iostream.h>

class student
{
  private :

  int roll;
  char name[10];
  int s,m,e,c,c1;
  int total;

  public :

  void set();
  void display();
};

void student :: set()
{
  clrscr();

  cout << "\n enter student roll no :: ";
  cin >> roll;

  cout << "\n enter student name :: ";
  cin >> name;

  cout << "\n enter SCIENCE marks :: ";
  cin >> s;

  cout << "\n enter MATHEMATICS marks :: ";
  cin >> m;

  cout << "\n enter ENGLISH marks :: ";
  cin >> e;

  cout << "\n enter C marks :: ";
  cin >> c;

  cout << "\n enter C++ marks :: ";
  cin >> c1;

  total = s+ m + e + c + c1;
}

void student :: display()
{
  cout << " " << roll << " " << name  << " " << total;
  cout << endl;
}

void main()
{
  student  s[5];
  int i;

  for(i=0;i<5;i++)
  {
   s[i].set();
  }

   cout << "\n rollno   name   total \n";

  for(i=0;i<5;i++)
  {
   s[i].display();
  }

  getch();
}