/*
half pyramid after 180 degree rotation 
enter a number n from the user
    *
   **
  ***
 ****
*****
This is how half pyramid after 180 degree rotation looks like.
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<i)
            cout<<" ";
            else
            cout<<"*";
        }
    cout<<endl;
    
    }
}