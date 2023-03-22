#include<bits/stdc++.h>
using namespace std;
int decimal_to_binary(int n)
{
    int sum=0;
while(n!=0)
{
sum=sum*10+n%2;
n=n/2;
}
return(sum);
}
int main()
{
    int m;
    cout<<"Enter a decimal Number "<<endl;
    cin>>m;
    cout<<"Binary value "<<decimal_to_binary(m);
}
