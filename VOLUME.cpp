#include<stdio.h>
#include<iostream.h>

int volume(int);
int volume(int,int,int);
float volume(int,int);

void main()
{
  int ch,l,b,h,r;
  float ans;

  do
  {
    cout << "\n | ------- menu list ------- |";
    cout << "\n     1.cuib     ";
    cout << "\n     2.cuiboued ";
    cout << "\n     3.cylender ";
    cout << "\n     4.EXIT     ";
    cout << "\n |---------------------------|";

    cout << "\n enter your choice :: ";
    cin >> ch;

    if(ch == 1)
     {
        cout << "\n enter length :: ";
        cin >> l;

        ans = volume(l);

        cout << "\n your ans is :: " << ans <<endl;
     }
    else if (ch == 2)
     {

        cout << "\n enter length :: ";
        cin >> l;

        cout << "\n enter breath :: ";
        cin >> b;

        cout << "\n enter height :: ";
        cin >> h;

        ans = volume(l,b,h);

        cout << "\n your ans is :: " << ans <<endl;
     }
    else if (ch == 3)
     {
        cout << "\n enter radious :: ";
        cin >> r;

        cout << "\n enter height :: ";
        cin >> h;

        ans = volume(r,h);

        cout << "\n your ans is :: " << ans <<endl;
     }
    else if(ch == 4)
     {
        cout << "\n your program is EXIT ";
     }
    else
     {
       cout << "\n your choice is wornd \n";
     }

  }while(ch != 4);

  scanf("%d");
}

int volume (int l)
{
  return l * l * l;
}

int volume (int l,int b,int h)
{
  return l * b * h;
}

float volume (int r,int h)
{
  return 3.14 * r * r * h;
}