#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
  char a[20];

  public:

  void set()
  {
     cout << "\n enter your name :: ";
     cin >> a;
  }

  void show()
  {
     cout << "\n your full name is :: " << a;
  }

  friend string add(string,string);
};

string add(string s1,string s2)
{
  string s3;

  strcpy(s3.a,s1.a);
  strcat(s3.a,s2.a);

  return s3;
}

void main()
{
  string s1,s2,s3;

  s1.set();
  s2.set();

  s3 = add(s1,s2);

  s3.show();

  getch();
}