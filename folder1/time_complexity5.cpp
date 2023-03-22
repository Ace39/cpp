#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int n;
    cin>>n;
    for(int i=n;i>=1;i=i/2)
    {
        for(int j=1;j<=i;j++)//when i=n then this j loop would execute n times
        /* 
        when i=n/2 then this j loop would execute upto n/2 times 
        let n/(2^k) satisfies >=1 then n>=(2^k)
        log n >= (k*log 2)
        (log n/log 2)>=k
        then execution time is n+ n/2 + n/2^2 + ... + n/2^k 
        sum of g.p geometric progression 
        */
        {
            c++;
        }
    }
}