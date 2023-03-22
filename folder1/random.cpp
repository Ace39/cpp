#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
//cout<<rand()<<endl;Being able to generate random numbers this rand() operator is used to generate random numbers
//however the rand() then you have to include the library <cstdlib> 
//however this rand() operator generates pseudo random number it means that each time the code runs it generates the same number
//srand() it takes a seed value then acccording to its feed it generates a random number so as the seed value of the seed changes the 
//random numbers , so in general from both the above mentioned methods rand() & srand() we can generate a random number
//but each time we run the code it will generate the same number so to solve it we introduce time() function, to use this
//function include <ctime> library. so each time you run the code a new random number gets generated.
/*int a;
cin>>a;
srand(a);
cout<<rand();*/
srand(time(0));
for(int i=1;i<=10;i++)
{
    cout<<1+rand()%6<<endl;

}



}