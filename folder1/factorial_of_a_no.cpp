#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter a no.";
     cin>>n;
     int fact=1;
     for(int i=1;i<=n;i++)
     {
        fact=fact*i;
     }
     cout<<fact;
}
/*
now suppose you have given two numbers and you have to find the factorial of both those numbers then you would simultaneously run
two for loops altogether and would make the program look bigger. 
or we can do like this that we create a function and gives it a job to print the factorial*/
