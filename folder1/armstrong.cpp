#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n;
    int num=n;
    while(n>0)
    {
        k=n%10;
        sum=sum+pow(k,3);
        n=n/10;   

    }
    if(sum==num)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
}