/*
Print palindromic pattern
        1          4 gap
      2 1 2        3 gap
    3 2 1 2 3      2 gap
  4 3 2 1 2 3 4    1 gap
5 4 3 2 1 2 3 4 5
enter n=5
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=4;j++)
        {
            cout<<" "<<" ";
        }
        for(int h=i;h>1;h--)
        {
            cout<<h<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k<<" ";
        }
         cout<<endl;
          }
}

