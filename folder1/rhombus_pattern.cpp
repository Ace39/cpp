/*
n=5
Print a rhombus pattern

        * * * * *    4 spaces 
      * * * * *      3 spaces
    * * * * *        2 spaces
  * * * * *          1 spaces
* * * * *

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    for(int j=4;j>=0;j--)
    {
    for(int i=j;i>=1;i--)
    {
    cout<<" "<<" ";
    }
    for(int k=1;k<=5;k++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
    }
}