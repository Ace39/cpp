/*
To find a key in the array
eg:- key=8
and list={67,556,44,34,9,8,56,9}
you have to find 8 in the list
*/
#include<iostream>
using namespace std;
int main()
{
    int n;//take size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int num;
    int k=0;
    cout<<"Enter a number to be searhed ";
    cin>>num;
    for(int i=0;i<n;i++)
    {
     if(num==arr[i])
     {
        k=1;
        break;
     }


    }
    if(k==1)
    {
    cout<<"No. is present in the array";
    }
    else
    {
        cout<<"No. is not present";
    }
    }
