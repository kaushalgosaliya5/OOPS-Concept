#include<iostream.h>
#include<conio.h>

class scime
{
  protected:

  int id;
  char name[10];
  int ocharge;
  int mcharge;

  public:

  void set1()
  {
    cout << "\n enter scime id :: ";
    cin >> id;

    cout << "\n enter scime name :: ";
    cin >> name;

    cout << "\n enter outgoing call rate :: ";
    cin >> ocharge;

    cout << "\n enter message rate :: ";
    cin >> mcharge;
  }
};

class customer : public scime
{
   int cid;
   char name[10];
   int ototal;
   int mtotal;

   public:

   void set2()
   {
      set1();

     cout << "\n enter customer id :: ";
     cin >> cid;

     cout << "\n enter customer name :: ";
     cin >> name;

     cout << "\n enter outgoing duration :: ";
     cin >> ototal;

     cout << "\n enter total messages :: ";
     cin >> mtotal;
   }

   friend void bill(customer);
};

void bill(customer c)
  {
    cout << "\n your total bill is :: " << (c.ototal*c.ocharge) + (c.mtotal*c.mcharge);
  }

void main()
{
  customer c;

  c.set2();

  bill(c);

  getch();
}