#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int a=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)//it takes n times to execute
    {
    a=a+1;
    }
    for(int j=1;j<=m;j++)//it takes m times to execute.
    {
        a=a+1;
    }
}//thus total time for execution would be m+n  O(m+n) where capital o represents the worst case