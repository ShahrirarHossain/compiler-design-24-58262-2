#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,2,3,1};
    int n=5;
    float sum=0;

    float avg;
    for(int i=0; i<4; i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;

    cout<<"averge is:"<<avg;

    return 0;

}
