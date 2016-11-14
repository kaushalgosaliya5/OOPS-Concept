#include<iostream.h>
#include<conio.h>

class matrix
{
  int x[3][3];

  public:

  void set()
  {
    for(int i=0;i<3;i++)
    {
      cout << "\n row number is :: " << i+1;

      for(int j=0;j<3;j++)
      {
        cout << "\n enter value :: ";
        cin >> x[i][j];
      }
    }
  }

  void show()
  {
     for(int i=0;i<3;i++)
     {
       for(int j=0;j<3;j++)
       {
         cout << "    " << x[i][j];
       }
       cout << endl;
     }
  }

  matrix operator +(matrix m1)
  {
    matrix tmp;

    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        tmp.x[i][j] = x[i][j] + m1.x[i][j];
      }
    }
    return tmp;
  }

  matrix operator -(matrix m1)
  {
    matrix tmp;

    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        tmp.x[i][j] = x[i][j] - m1.x[i][j];
      }
    }

    return tmp;
  }
};


void main()
{
  matrix m1,m2,m3,m4;

  m1.set();
  m2.set();

  m3 = m1 + m2;
  m4 = m1 - m2;

  m3.show();

  cout << "\n ";

  m4.show();

 getch();
}