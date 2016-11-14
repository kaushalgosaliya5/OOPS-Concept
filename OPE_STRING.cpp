#include<iostream.h>
#include<conio.h>

class string
{
  char x[20];

  public:

  void set()
  {
    cout << "\n enter string :: ";
    cin >> x;
  }

  void show()
  {
    cout << "\n your new string is :: " << x;
  }

  string operator +(string &s2)
  {
    string tmp;

    strcpy(tmp.x,x);
    strcat(tmp.x,s2.x);

    return tmp;
  }
};

void main()
{
  string s1,s2,s3;

  s1.set();
  s2.set();

  s3 = s1 + s2;

  s3.show();

 getch();
}