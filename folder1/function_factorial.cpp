#include<iostream>
using namespace std;
void fact(int n)
{
int f=1;
for(int i=1;i<=n;i++)
{
    f=f*i;
}
cout<<"the Factorial of "<<n<<" is "<<f<<endl;
}
int main()
{
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
     fact(m1);
     fact(m2);
     fact(m3);
}
