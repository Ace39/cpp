#include<iostream>
using namespace std;
int main()
{
 int n;
 int c=0;
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j+=i)/*
    when i=1 then j=1;j<=n;j++ thus this loop would execute n times 
    now when i=2 then j=1;j<=n;j=j+2 then j=1,3,5,7,...when n is even then loop executes n/2 or when n is odd then (n+1)/2 whatever the value of n ne we would take the approximate value i.e n/2
    now when i=3 then j=1;j<=n;j=j+3 then j=1,4,7,10,13.. n=9 then the loop would execute n/3 times 
    like wise then i=n the j=1;j<=n;j=j+n i.e j=1,n+1 means loop would run once
    thus total execution would be n+ n/2 + n/3 + n/4 +...+1
    or we can write it in a way {n(1+ 1/2 + 1/3 + 1/4 +...+ 1/n )}  
    now {(1 + 1/2 + 1/3 + ...+ 1/n) <= log n} then integration of 1/n is log n
    thus taking approx would be n*(log n)
    */
    {
        c=c+1;
    }
 }   
}