#include<iostream>
using namespace std;
int main()
{
    int choice,a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Enter your choices  1 for sum , 2 for multiplication , 3 for subtraction , 4 for division :- ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<a+b;
        break;
        case 2:
        cout<<a*b;
        break;
        case 3:
        cout<<a-b;
        break;
        case 4:
        cout<<a/b;
        break;
        default:
        cout<<"Invalid Choice";

        
    }
}