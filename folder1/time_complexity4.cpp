#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    int i=n;
    while(i>=1)
    {
    a=a+1;
    i=i/2;
    }//now what would be the execution time?
    //lets take cases 
    /*
    when i=n , the loop would execute once and then i=i/2 becomes n/2
    then (n/2=i)>=1 then also case satisfied then loop would execute once and i would becom n/(2^2)
    so we can see that loop has executed 2 times and i has become n/(2^2) means let the loop executed upto k+1 times
    then i to permit the loop to run must have value i=n/(2^k) which must be >=1 
    n/(2^K) >= 1 , so n>=(2^k) , taking log on both sides log n >= k*(log 2) , logn/log2>=k, its means k<= logn/log2
    then total time of execution is k+1;
    */
}