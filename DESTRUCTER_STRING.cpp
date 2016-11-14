#include<iostream.h>
#include<conio.h>

class string
{
  char *s;
  int l;

  public:

  string()
  {
    char n[100];

    cout << "\n enter string  :: ";
    cin >> n;

    l = strlen(n);

    s = new char[l+1];

    strcpy(s,n);
  }

  void compare(string &s2)
  {
    int i;

    i = strcmp(s,s2.s);

    if(i == 0)
    {
      cout << "\n string are same ";
    }
    else
    {
      cout << "\n string are defferent ";
    }
  }

 void show()
 {
   cout << "\n your string is :: " << s;
 }

 ~string()
 {
   delete []s;
 }
};

void main()
{
   string s1,s3;

   s1.compare(s3);
   s1.show();
   s3.show();


 getch();
}

