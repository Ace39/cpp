#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a=0;
    int m,n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            a=a+rand();
        }
    }//execution time is m*n
    for(int k=1;k<=n;k++)
    {
        a=a+rand();
    }//execution time of this loop ois n
}//total execution timre is (n*m + n)
//thus worst case O(nm+n)
