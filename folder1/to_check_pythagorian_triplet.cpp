/*
to check if three numbers are pythagorian triplet then first take out the max of the three numbers then 
check that if he sum of the square of the remaining two numbers are equal to the largest one square then its is called
 a pythagorian triplet.
 eg:-
 let the input is given three numbers a,b,c
 then first find max(a,b,c)
 suppose it is a then for pythagorian triplet then condition will be
 a^2=b^2+c^2
 
 */
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int check_pythagorian(int a,int b,int c)
{
if(a*a==(b*b+c*c))
{
return(1);
}
else
return(0);
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int a[3]={x,y,z};  /*
    First i did the sorting of the array and kept the max at the first position then  send the a[0] element 
    to the function. */
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        { 
        if(a[j]>a[i])
        {
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        }
    
    
    }
    int k=check_pythagorian(a[0],a[1],a[2]);
    if(k==1)
    {
        cout<<"Pythagorian Triplet";
    }
    else{
        cout<<"Not a pythagorian triplet";
    }
}