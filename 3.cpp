#include <iostream>
using namespace std;

int main()
{
    string input;

    cout << "Enter a line: ";
    cin >> input;

    if (input[0]=='/' && input[1]=='/')
    {
        cout<<"Single Line Comment";
    }
    else if(input[0]=='/' && input[1]=='*')
    {
        cout<<"Multiple Line Comment";
    }
    else
    {
        cout<<"Not a Comment";
    }

    return 0;
}

