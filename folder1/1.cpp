#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter a character:- a for printing Namaste or b for printing bonjour ";
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"Namaste";
        break;
        case 'b':
        cout<<"Bonjour";
        break;
        default:
        cout<<"Invalid choice";
    }
}