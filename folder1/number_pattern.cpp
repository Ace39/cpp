/*
Number Pattern  n=5
    1     4 spaces
   1 2    3 spaces
  1 2 3   2 spaces
 1 2 3 4  1 space
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    for(int i=1;i<=5;i++)
    {
        for(int k=5-i;k>=1;k--)
        {
            cout<<" ";
        }
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    }
    
}