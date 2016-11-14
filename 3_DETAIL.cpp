#include<iostream.h>
#include<conio.h>

class p
{
  protected:

  char name[10];
  float age;

  public:

  p()
  {
    cout << "\n enter name of person :: ";
    cin >> name;

    cout << "\n enter age :: ";
    cin >> age;
  }

  void virtual show()
  {
    cout << "\n hello";
  }
};

class e : public p
{
  float bca;
  float mca;
  float expe;

  public:

  void eset()
  {
    cout << "\n enter persentage of bca :: ";
    cin >> bca;

    cout << "\n enter persentage of mca :: ";
    cin >> mca;

    cout << "\n enter experience total year :: ";
    cin >> expe;
  }

  void show()
  {
     cout << "\n name  age  bca   mca   expe";
     cout << "\n " << name << "   " << age << "    " << bca << "    " << mca << "    " << expe;
  }
};

void main()
{
  e  e1;
  p  *p1;

  e1.eset();

  p1 = &e1;
  p1 -> show();

 getch();
}