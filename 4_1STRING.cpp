#include<iostream.h>
#include<string.h>
#include<conio.h>

class string
{
  char *s;
  int l;

  public:

  void set(char t[20])
  {
    l = strlen(t);
    s = new char[l+1];
    strcpy(s,t);
  }

  void show()
  {
    cout << "\n new string is :: " << s;
  }

  string operator +(string s2)
  {
    string tmp;

    tmp.l = l+s2.l;
    tmp.s = new char[tmp.l+1];
    
    strcpy(tmp.s,s);
    strcat(tmp.s,s2.s);

    return tmp;
  }
};


void main()
{
  string s1,s2,s3;
  char a[20],b[20];

  cout << "\n enter string :: ";
  cin >> a;

  s1.set(a);

  cout << "\n enter second string :: ";
  cin >> b;

  s2.set(b);

  s3 = s1 + s2;

  s3.show();

 getch();
}