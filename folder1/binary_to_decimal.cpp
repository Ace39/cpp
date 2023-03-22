#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int binary_to_decimal(int n)
{
    int c=0;
    int sum=0;
    while(n>0)
    {
        int t=n%10;
        sum=sum+t*((int)pow(2,c));
        c++;
        n=n/10;
    }
    return(sum);
}
int Another_Method_Bin_To_Dec(int a)
{
    int ans=0;
    int x=1;
    while(a>0)
    {
    int y=a%10;
    ans=ans+x*y;
    x=x*2;
    a=a/10;
    }
    return(ans);
}
int main()
{
    int m;
    cout<<"Enter your Binary digit ";
    cin>>m;
    cout<<endl<<"Decimal Number "<<binary_to_decimal(m);

}