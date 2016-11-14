#include<iostream.h>
#include<conio.h>

class student
{
  protected:

  int roll;
  char name[10];

  public:

  void sset()
  {
    cout << "\n enter roll number of student :: ";
    cin >> roll;

    cout << "\n enter student name :: ";
    cin >> name;
  }
};

class test
{
  protected:

  int m;
  int s;

  public:

  void tset()
  {
    cout << "\n enter marks of maths :: ";
    cin >> m;

    cout << "\n enter marks of science :: ";
    cin >> s;
  }
};

class result : public test,public student
{
  float per;

  public:

  void show()
  {
    per = ((m+s)*100)/200;
    cout << "\n rollno  name  maths  science    per ";
    cout << "\n   " << roll << "   " << name << "    " << m  << "   " << s  << "  " << per;
  }
};

void main()
{
  result r;

  r.sset();
  r.tset();
  r.show();

 getch();
}