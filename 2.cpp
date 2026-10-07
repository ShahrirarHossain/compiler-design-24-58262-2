#include<iostream>
using namespace std;


int main()
{
    string x;


    cout<<"Enter value to check: ";
    cin>>x;

    int count=0;
    for (int i = 0; i < x.length(); i++)
        {
        if (x[i]=='+' || x[i]=='-' || x[i]=='*' || x[i]=='/' || x[i]=='%' || x[i]=='=')
            {
            count++;
            cout<<"operator"<<count<<":"<<x[i];
            }
        }
    if (count==0)
    {
        cout<<"no operators" << endl;
    }





    return 0;
}
