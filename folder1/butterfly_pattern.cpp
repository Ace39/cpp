/*
Butterfly pattern looks like this
for n=4
*      *
**    **
***  ***
********
***  ***
**    **
*      *

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=1;i<2*n;i++)
    { 
        if(i<=n)
       { for(int j=1;j<=2*n;j++)
        {
            if(j<=i||j>(2*n-i))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    else{
        for(int k=1;k<=2*n;k++)
        {
            if(k<=2*n-i||k>i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }
}