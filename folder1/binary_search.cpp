/*
bubble sort 
in this {1,2,3,4,5,6,7} & lets yoou want to find no. 6.
here array is taken in sorted manner then suppose we are given a number which has to be searched in the list then we will divide the list in two
halves and compare if the given number is less or greater than the middle number if given num is > middle no. then it  would lie in the 
right half if given no. is < then the middle no. then given no. has probablity to lie in the left side. and like wise we would repeat the 
process until we don't come to a conclusion.
 */
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int b=0;
    int s=0,e=n;//s represents the starting point & e represents the end point.
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(key==arr[mid])
        {
        return mid;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else 
        {
            e=mid-1;
        }

    } 
    return -1;
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in the array in sorted manner"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter a number you want to search "<<endl;
    if(binarySearch(arr,n,k)>0)
    {
        cout<<"the term has been found loacated at "<<binarySearch(arr,n,k);
    }
    else 
    cout<<"The given Number is not found"<<endl;
     
    
}
