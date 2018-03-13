#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a,h,d,d1=0;
cout<<"enter your number :"<<endl;
cin >>a;
int i=a;
if(a>=100 && a<=999)
{
cout<<"its a three digit"<<endl;

h = 3;

}

if(a>=1000 && a<=10000)

{ cout<<"its a four digit number "<<endl;

h = 4;

}

for (int n=1 ; n<=h; n++)

{
int b=a%10;
int d=pow(b,h);
d1=d+d1;
int c=a/10;
a=c;

}

cout<<d1<<endl;

if (d1==i) {

cout<<"its a armstrong number : "<<i; }

else {

cout <<"it is not an armstrong number :"<<i; }

/*

int b=a%10;
int c=a/10;
int d=c%10;
int e=c/10;

int f = (eee)+(ddd)+(bbb);
if (f==a)
    {
    cout<<"This is what we call armstrong number ";
    }
    else
    {
    cout<<"IT is not armstrong ";
    } */

return 0;

}

