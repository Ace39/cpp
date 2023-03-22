/*
Star Pattern
      *        3 gap
    * * *      2 gap
  * * * * *    1 gap
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
      
      THis is the star pattern.
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=7;i++)
    {
        for(int k=7-i;k>i;k=k-2)
        {
            cout<<" "<<" ";
        }
        if(i<4)
        {
          for(int j=1;j<=2*i-1;j++)
          {
            cout<<"*"<<" ";
          }
          cout<<endl;
        }
  
        else 
        {
         for(int k=7-i;k<3;k++)
         {
          cout<<" "<<" ";
         }
         for(int h=1;h<=(2*(7-i)+1);h++)
         {
          cout<<"*"<<" ";
         }
         cout<<endl;
        }
        
        
    }
}