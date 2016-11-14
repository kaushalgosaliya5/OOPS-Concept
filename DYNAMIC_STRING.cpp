#include<iostream.h>
#include<conio.h>

class string
{
  char *s;
  int l;

  public:

  void set(char t[100])
  {
    l=strlen(t);
    s=new char[l+1];
    strcpy(s,t);
  }

  void show()
  {
    cout << "\n your new string is :: " << s;
  }

  friend string add(string,string);
};

string add(string s1,string s2)
{
  string tmp;

  tmp.l = s1.l + s2.l;
  tmp.s = new char[tmp.l+1];

  strcpy(tmp.s,s1.s);
  strcat(tmp.s,s2.s);

  return tmp;
}


void main()
{
  string s1,s2,s3;
  char a[10],b[10];

  cout << "\n enter your first name :: ";
  cin >> a;
  s1.set(a);

  cout << "\n enter your second name :: ";
  cin >> b;
  s2.set(b);

  s3 = add(s1,s2);

  s3.show();

  getch();
}