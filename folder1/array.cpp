#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n;
    cin>>n;
    int array[n];//declare the array
    
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}