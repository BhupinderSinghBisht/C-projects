#include <iostream>

using namespace std;

int main()
{
  int a=0,b=1,c=0,d;


     cout<<a<<"+"<<b<<"+";

  for(d=1;d<=10;d++)

    {
      c=a+b;
      cout<<c<<"+";
      a=b;
      b=c;
   if(d==10)
      cout<<a+b;

    }

   return 0;
}
