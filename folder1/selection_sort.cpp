/*
In this selection sort method we first find the minimum of all the numbers in the array and then swap it with the starting element
array={78,45,89,46,36,8,7}
then after finding minimum of all then i.e 7 then we swap it with the starting 78 no. 
now array={7,45,89,46,36,8,78} now the array runs in {45,89,46,36,8,78} then again we find smallest no. 8 and the swap it with the starting
Find the minimum element in the unsorted array and swap it with element at the beginnig of the array.
*/
#include<iostream>
#include<climits>
using namespace std;
void selection_sort(int arr[],int n)
{
    int index;
    
    for(int i=0;i<n;i++)
    {
        int minNo = INT_MAX;
        for(int j=i;j<n;j++)
        {
           minNo = min(minNo,arr[j]); //min is inbuilt function which returns minnimum of the two
        }
        for(int k=0;k<n;k++)
        {
            if(arr[k]==minNo)
            {
                index=k;
            }
        }
        int t=arr[i];
        arr[i]=minNo;
        arr[index]=t;//swappimg of elements take place
    }
    
cout<<"Your sorted array is";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

}
int main()
{
    int n;
    cout<<"Enter no. of elements you want in the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
}