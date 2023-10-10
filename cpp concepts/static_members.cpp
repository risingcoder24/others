//Static members variable and member function

#include <iostream>
using namespace std;

class Account
{
  private:   
  int balance;   //Instance member variable
  static float roi;   //Static member variable

  public:
  void setbalance(int b)
  {
      balance=b;
  }
  static void setroi(float r)  //Static member function
  {
      roi=r;
      
  }

};
float Account:: roi=3.5f;
int  main()
{   Account a1,a2;
    a1.setroi(4.5f);           //Static member function can be invoked with or without object
    Account:: setroi(4.5f);
    return 0;
}