#include<iostream>
using namespace std;

int main()
{
    string x;

    cout<<"Enter a value: ";
    cin>>x;

    for(int i=0; i<x.length(); i++)
    {
        if (x[i]<48 || x[i]>57)
        {
            cout <<"Not Numeric";
            return 0;
        }
    }

    cout<<"Numeric Constant";

    return 0;
}
