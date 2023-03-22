/*
now suppose you have given two numbers and you have to find the factorial of both those numbers then you would simultaneously run
two for loops altogether and would make the program look bigger. 
or we can do like this that we create a function and gives it a job to print the factorial*/
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    int fact1=1,fact2=1;
    cin>>n1>>n2;
    for(int i=1;i<=n1;i++)
    {
    fact1=fact1*i;
    }
    for(int j=1;j<=n2;j++)
    {
        fact2=fact2*j;
    }
    cout<<"The factorial of "<<n1<<"="<<fact1<<endl;
    cout<<"Factorial of "<<n2<<"="<<fact2;
}
/*
now to make program easier and easy to run we will create a function and in that we can call
with different nos and print different factorials for different number.
*/