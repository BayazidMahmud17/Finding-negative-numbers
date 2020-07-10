#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of numbers:";
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
    cout<<"\nEnter number"<<i+1<<":";
    cin>>a[i];
    }
    cout<<"\nNegative numbers are:\n";
    for(i=0;i<n;i++)
    {
    if(a[i]<0)
    cout<<a[i]<<" ";
    }
return 0;
}