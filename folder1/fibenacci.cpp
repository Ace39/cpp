//fibenacci is 0,1,1,2,3,5,8,.... here the coming third element is the summation of the pre two numbers like 0+1=1 then 1+1=2,1+2=3
#include<iostream>
using namespace std;
void fibenacci(int n)
{ 
int t1=0,t2=1,t;

cout<<t1<<","<<t2;
for(int i=2;i<n;i++)
{
    t=t1+t2;
    cout<<","<<t;
    t1=t2;
    t2=t;
}

}
int main()
{
   int m;
   cin>>m;
   fibenacci(m);

}