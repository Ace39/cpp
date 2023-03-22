#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter no. of elements you want in the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
         c=i;
        for(int j=i-1;j>=0;j--)
        {
            
            if(arr[c]<arr[j] && c>=1 )
            {
                int temp=arr[j];
                arr[j]=arr[c];
                arr[c]=temp;
                c--;
            }
        }
    }
    cout<<"The sorted elements are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}