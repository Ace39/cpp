/*
1 (0C0)                                 n=0 , r=0
1 (1C0) 1 (1C1)                         n=1 , r=0,1
1 (2C0) 2 (2C1) 1 (2C2)                 n=2 , r=0,1,2
1 (3C0) 3 (3C1) 3 (3C2) 1 (3C3)         n=3 , r=0,1,2,3
1 (4C0) 4 (4C1) 6 (4C2) 4 (4C3) 1 (4C4) n=4 , r=0,1,2,3,4
OR
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1; 
    if(n>0)
    {for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return(f);}
    else{
        return(1);
    }
}
int main()
{ int m;
cin>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/((fact(i-j))*fact(j))<<" ";
        }
        cout<<endl;
    }
}