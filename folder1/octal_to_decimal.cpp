#include<bits/stdc++.h>
using namespace std;
int octal_to_decimal(int n)
{
    int sum=0;
    int y=1;
    while(n>0)
    {
        int x=n%10;
        sum=sum+x*y;
        y=y*8;
        n=n/10;
    }
    return(sum);

}
int main()
{
 int m;
 cout<<"Enter an Octal Number "<<endl;//Octal Number is a number created using digits from 0 to 7;
 cin>>m;
 cout<<"Octal Conversion of "<<m<<" to Decimal is "<<octal_to_decimal(m);   
}