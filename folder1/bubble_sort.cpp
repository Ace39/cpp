/*
Repeatedly swap two adjacent elements if they are in wrong order
for eg:- if we want array to be sorted in ascending order then if left element is greater than right element then it needs to be swapped

*/

#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if (arr[j]>arr[j+1])
        {
           int temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp; 
        }
    }
}
cout<<"The sorted array "<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
    int n;
    cout<<"Enter the no. of elements you want in the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
}
