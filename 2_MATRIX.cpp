#include<iostream.h>
#include<conio.h>

class matrix
{
  int r,c;
  int **p;  // pointer to pointer..........
  int i;

  public:

  void set()
  {
    cout << "\n enter number of row :: ";
    cin >> r;

    cout << "\n enter number of colume :: ";
    cin >> c;

    p = new int *[r];   // pointer to pointer

    for(i=0;i<r;i++)
    {
       p[i] = new int[c];
    }

    for(i=0;i<r;i++)
    {
       cout << "\n\n enter value for row :: " << i+1;

       for(int j=0;j<c;j++)
       {
         cout << "\n enter element number :: ";
         cin >> p[i][j];
       }
    }
  }

  void show()
  {
    cout << "\n\n your new matrix is :: \n";

    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        cout << p[i][j] << "  ";
      }
      cout << endl;
    }
  }
};

void main()
{
  matrix m;

  m.set();
  m.show();

  getch();
}