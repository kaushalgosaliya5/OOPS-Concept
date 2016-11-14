#include<iostream.h>
#include<string.h>
#include<conio.h>

class student
{
  int rollno;
  char name[10];
  int dd,mm,yy;
  int sub[3];
  int total;
  float per;
  char result[10];
  int i;

  public:

  student()
  {
    total = 0;
  }

  void set()
  {
    clrscr();

    cout << "\n enter rollno :: ";
    cin >> rollno;

    cout << "\n enter name :: ";
    cin >> name;

    cout << "\n date of birth (dd/mm/yy) :: ";

    cin >> dd;
    cout << "-";
    cin >> mm;
    cout << "-";
    cin >> yy;

    for(i=0;i<3;i++)
    {
      cout << "\n enter marks subject " << i+1 << ":: ";
      cin >> sub[i];

      total = total + sub[i];
    }

    per = total * 0.3;

    if(per < 40)
    {
      strcpy(result,"FAIL");
    }
    else
    {
      strcpy(result,"PASS");
    }
  }

  void display()
  {
    cout << "\n  " << rollno << "    " << name << "    " << dd << "-" << mm << "-" << yy << "    " << per << "%    " << result;
  }
};

void main()
{
  student s[2];
  int i;

  for(i=0;i<2;i++)
  {
    s[i].set();
  }

  cout << "\n rollno    name    d.o.b    dd/mm/yy   per    result ";

  for(i=0;i<2;i++)
  {
    s[i].display();
  }

  getch();
}