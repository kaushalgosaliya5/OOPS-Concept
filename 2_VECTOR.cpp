#include<iostream.h>
#include<conio.h>

class vector
{
  int x[10];
  int i;

  public:

  void set()
  {
   for(i=0;i<5;i++)
   {
    cout << "\n enter value of vector :: ";
    cin >> x[i];
   }
  }

  void show()
  {
    for(i=0;i<5;i++)
    {
     cout << x[i] << "--> ";
    }
  }

  friend vector add(vector,vector);
};


vector add(vector v1,vector v2)
 {
   vector v;
   int i;

   for(i=0;i<5;i++)
   {
     v.x[i] = v1.x[i] + v2.x[i];
   }

   return v;
 }

void main()
{
  vector v1,v2,v3;

  cout << "\n enter vecter first value :: ";

  v1.set();

  cout << "\n enter vecter second value :: ";
  v2.set();

  v3 = add(v1,v2);

  cout << "\n new vecter value is :: \n\n";

  v3.show();

  getch();
}