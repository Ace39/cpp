/*
Now you have to print half pyramid using numbers
1
22
333
4444
55555 
ask user to enter a number n.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}