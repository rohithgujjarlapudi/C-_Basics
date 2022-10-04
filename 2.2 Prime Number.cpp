QUESTION
--------
Write a C++ program used to demonstrates how to find out whether a natural number is prime or not


Sample Input
------------
5

Sample Output
-------------
The given number is a prime number

PROGRAM
-------
#include <iostream>
using namespace std;
int main()
{
int n,i,c=0;
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
cout<<"The given number is a prime number";
else
cout<<"The given number is not a prime number";
return 0;
}
