#include <iostream>
using namespace std;

int main() {
  int n,product = 1;
  
  cout<<"Enter the number : ";
  cin>>n;
  for(int i = 1;i<=n;i++){
    product = product*i;
  }
  cout<<"The factorial of "<<n<<" is : ";
  cout<<product;
  return 0;
  
}
