#include<iostream.h>
#include<conio.h>

void main()
{
  int size,max;
  int *p;
  int i;

  cout << "\n enter how-manny number enter :: ";
  cin >> size;

  p = new int[size]; // this is a pointer to memeory allocat for howmanny memory to useing........

  for(i=0;i<size;i++)
  {
    cout << "\n enter element no " << i+1 << " : ";
    cin >> p[i];
  }

  max = p[0];

  for(i=0;i<size;i++)
  {
    if(p[i] > max)
    {
      max = p[i];
    }
  }

  cout << "\n your maximum value is :: " << max;

  getch();
}