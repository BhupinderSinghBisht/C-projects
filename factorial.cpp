#include <iostream>

using namespace std;

int main()
{

    int a=1,b=1,c,d;
cout <<"enter the value want the factorial of =";
cin>>a;
    for(c=1;c<=a;c++)
    {

     b=b*c;
     d=b;
     if(c==a)
     {
         cout<<c<<endl;
         break;
     }
    cout<<c<<"*";
    }
    cout << "Factorial of " <<a<<"!"<<" ="<<d<< endl;
    return 0;
}
