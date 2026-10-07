#include <iostream>
using namespace std;

int main()
{
    string x;

    cout<<"Enter an identifier: ";
    cin >>x;

    if(!((x[0]>=65 && x[0]<=90) ||
          (x[0]>=97 && x[0]<=122) ||
          x[0]==95))
    {
        cout<<"Not an Identifier";
        return 0;
    }


    for(int i=1; i<x.length(); i++)
    {
        if (!((x[i]>=65 && x[i]<=90) ||
              (x[i]>=97 && x[i]<=122) ||
              (x[i]>=48 && x[i]<=57) ||
              x[i]==95))
        {
            cout<<"Not an identifier";
            return 0;
        }
    }

    cout<<"it is identifier";

    return 0;
}
