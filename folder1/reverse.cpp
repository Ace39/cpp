#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,k;
    cout<<"Enter a number";
    cin>>n;

    while(n!=0)
    {
      k=n%10;
    reverse=reverse*10+k;
    n=n/10;
    }
    cout<<reverse;
}