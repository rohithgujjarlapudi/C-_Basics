QUESTION
--------
Write a C++ program to check two given integers and return the value whichever value is nearest to 13 without going over. Return 0 if both numbers go over. 
         

Sample Input
------------
4
4 5
7 12
10 13
17 33

Sample Output
-------------       
5
12
13
0


PROGRAM
-------
#include <iostream>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
  int a,b;
  cin>>a>>b;
  if(a<=13 && b<=13)
  {
    if(a<b)
      cout<<b<<endl;
    else
      cout<<a<<endl;
  }
  else if(a>13 && b<=13)
    cout<<b<<endl;
  else if(a<=13 && b>13)
    cout<<a<<endl;
  else
    cout<<"0"<<endl;
}
  return 0;
}
