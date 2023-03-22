#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,m;
    int a=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)//when i=1 this j would execute m times similarily when i=2 then this loop would again execute m times
        //and when i=n then j would again execute m times thus total time for execuition is m*n so worst case O(m*n).
        {
        a=a+rand();
        }
    }
//O(m*n)