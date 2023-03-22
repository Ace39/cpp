#include<iostream>
#include<climits>//header files included to give maximum integer it can provide and minimum integer it can provide
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxNo=max(maxNo,arr[i]);//max() is an inbuilt function in c which results in maximum of two numbers
        minNo=min(minNo,arr[i]);//min() is an inbuilt function in c which compares two numbers and results the min of two numbers
    }
cout<<maxNo<<" "<<minNo;
}