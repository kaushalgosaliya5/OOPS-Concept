#include<iostream.h>
#include<conio.h>

void minimum(int,int,int);
void minimum(int,int);

void main()
{
  int x,y,z;

  cout << "\n value of x :: ";
  cin >> x;

  cout << "\n value of y : ";
  cin >> y;

  cout << "\n value of z :: ";
  cin >> z;

  cout << "\n maximum of x,y ans z :: \n";
  minimum(x,y,z);

  cout << "\n\n maximum of x and y :: \n";
  minimum(x,y);

  getch();
}

void minimum(int x,int y,int z)
{
   if(x < y)
   {
      if(x < z)
      {
         cout << "\n x is minimum value :: " << x;
      }
      else
      {
         cout << "\n z is minimum value :: " << z;
      }
   }
   else
   {
      if(y < z)
      {
         cout << "\n y is minimum value :: " << y;
      }
      else
      {
         cout << "\n z is minimum value :: " << z;
      }
   }
}

void minimum(int x,int y)
{
  if(x < y)
  {
    cout << "\n x is minimum :: " << x ;
  }
  else
  {
    cout << "\n y is minimum :: " << y;
  }
}
