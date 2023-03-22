/*
Print
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)
            {
                if(j%2==0)
                {
                    cout<<1<<" ";
                }
                else
                {
                    cout<<0<<" ";
                }
            }
            cout<<endl;

        }
        else
        {
         for(int k=1;k<=i;k++)
         {
            if(k%2==0)
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<1<<" ";
            }
         }
         cout<<endl;
        }
    }
}