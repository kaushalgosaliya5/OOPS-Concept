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

  void operator ==(string s2)
  {
    int i;

    i = strcmp(s,s2.s);

    if(i == 0)
    {
      cout << "\n BOTH STRING IS SAME " << endl;
    }
    else
    {
      cout << "\n BOTH STRING IS NOT SAME" << endl;
    }
  }

  void operator <=(string s2)
  {
    if(l < s2.l)
    {
       cout << "\n S1 STRING LENGTH IS LESS";
    }
    else if(l > s2.l)
    {
       cout << "\n S2 STRING LENGTH IS LESS";
    }
    else
    {
       cout << "\n BOTH STRING LENGTH IS SAME";
    }
  }
};


void main()
{
  string s1,s2,s3;
  char a[20],b[20];

  cout << "\n enter first string :: ";
  cin >> a;

  cout << "\n enter second string :: ";
  cin >> b;

  s1.set(a);
  s2.set(b);

  s1 == s2;
  s1 <= s2;

  getch();
}
