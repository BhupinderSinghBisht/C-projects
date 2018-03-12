#include <iostream>

using namespace std;

int main()
{
    string bhu("What a wonderfull day it is");// put your paragraph in here
    string bhup("it");
    size_t found;


 found = bhu.find("day" );
    if (found  != string::npos ){
    cout<<"first word found   at  ";
    cout<<found<<endl;
    }
     found = bhu.find(bhup);
    if(found != string::npos)
    {
        cout<<"second  world found at: " ;
        cout<<found<< endl;
    }

    else{

    cout<<"nothing here"<< endl<< endl;
    }

    found = bhu.find("a" );
    if (found  != string::npos ){
    cout<<"third word found  at :   ";
    cout<<found<<endl;

    }
   found = bhu.find("What" );
    if (found  != string::npos ){
    cout<<"fourth word found at : ";
    cout<<found<<endl;

    }
    found = bhu.find("wonderfull" );
    if (found  != string::npos ){
    cout<<"fifth word found  at:   ";
    cout<<found<<endl;

    }
    return 0;
}
