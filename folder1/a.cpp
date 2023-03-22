#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{ int add=0;
for(int i=1;i<=n;i++)
{
add=add+i;
}
return(add);
}
int main()
{
    int m;
    cin>>m;
    cout<<sum(m);
}