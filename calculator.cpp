#include <iostream>
#include"caculator.h"
using namespace std;

int main()
{
  cout<<"enter the first value :";
  cin >>a;
  cout<<"enter the second value :";
  cin>>b;
    sum(a,b);
    sub(a,b);
     multiply(a,b);
     divide(a,b);
    cout << "Hello world!" << endl;
    return 0;
}
void sum(int d ,int e)
{
     c=d+e;
     cout<<"sum will be ="<<c<<endl;
     //return c;

}
void sub(int d ,int e)
{
     c=e-d;
     cout<<"sub will be ="<<c<<endl;
     //return c;

}
void multiply(int d, int e)
{

  c=d*e;
  cout<<"multiply will be ="<<c<<endl;

}
void  divide(int d,int e)
{
    c=e/d;
    cout<<"division will be "<<c<<endl;
}
