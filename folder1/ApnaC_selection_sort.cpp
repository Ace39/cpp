#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements you want in array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)//arr={7,98,4,76,5,78,23} no. of elements=7 now when i=0 then j=1 now we would compare the remainig elements 
    {//with preceding ith position element now as such jth position element is less than ith pos element than it will be swapped
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}