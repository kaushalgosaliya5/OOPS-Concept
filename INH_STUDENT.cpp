#include<iostream.h>
#include<conio.h>

class student
{
  protected:

   int roll;
   char name[10];
   int age;

   public:

   void set1()
   {
     cout << "\n enter student roll number :: ";
     cin >> roll;

     cout << "\n enter student name :: ";
     cin >> name;

     cout << "\n enter student age :: ";
     cin >> age;
   }
};

class exam : public student
{
  protected:

  int maths;
  int science;
  int english;

  public:

  void set2()
  {
    set1();

    cout << "\n enter marks of maths :: ";
    cin >> maths;

    cout << "\n enter marks of science :: ";
    cin >> science;

    cout << "\n enter marks of english :: ";
    cin >> english;
  }
};

class result : public exam
{
  float per;

  public:

  void grade()
  {
     per = ((maths+science+english)*100) / 300;

     if(per >= 80)
     {
       cout << "\n this student obtaine grade  :: A + ";
     }
     else if(per < 80 && per >= 70)
     {
       cout << "\n this student obtaine grade  :: A ";
     }
     else if(per < 70 && per >= 60)
     {
       cout << "\n this student obtaine grade :: B + ";
     }
     else if(per < 60 && per >= 50)
     {
       cout << "\n this student obtaine grade :: B ";
     }
     else
     {
       cout << "\n this student obtaine grade :: E ";
     }
  }
};

void main()
{
   result r;

   r.set2();
   r.grade();

   getch();
}
