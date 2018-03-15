#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0;

    cout<<"Enter the value you want to find out :";

    cin>>a;

    if(a%2==0)
    {

     cout<<"Enter number is an even:"<<endl;
    }
     else
     {
         cout<<"Enter number is not even:"<<endl;
     }

    if(a%2!=0)
     {

        cout<<"Enter value is an odd number :"<<endl;
    }
    else{

        cout<<"Enter number is not odd :"<<endl;
    }

    for (b=1;b<=a;b++)
    {

        if(a%b==0)
        {
            c++;
        }

    }
    if(c==2)
    {


    cout<<"Enter number is a prime :";
}

else
{
    cout<<"enter number is not prime:";
}
    return 0;
}
