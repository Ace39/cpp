#include<iostream>
//#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int flag;
    for(int i=2;i<=n;i++)//another way for(int i=2;i<=sqrt(n);i++) 
    {
      if(n%i==0)
      {
        cout<<"NON-PRIME";
        flag=1;
        break;
      }
      if(flag==0)
      {
        cout<<"PRIME";
      }
    }

}