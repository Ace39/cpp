//here we will be provided with only one variable which is n=5
/*


*****
****
***
**
*

This is how half pyramid would look like.

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
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}