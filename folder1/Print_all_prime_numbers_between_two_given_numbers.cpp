//print all prime numbers betwwen two given numbers.
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,flag=0;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
             flag=1;
             break;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
        flag=0;//i came through a bug where it was printing only one prime no. latter i realised that after putting flag=1 when case is satisfied i have to reintialise it with flag=0 to continue for finding other frime no.s
    }
}