#include<iostream>
using namespace std;
int main()
{
    //cout<<"Hello";
    int row,col;
    cout<<"Enter no. of rows and no. of columns :- ";
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}