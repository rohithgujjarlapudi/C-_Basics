#include <iostream>
using namespace std;
int main(){
  int left,right;
  left = 1000;
  right = 2000;
  for(int i = left;i<=right;i++){
    if((i%5==0)&&(i%8==0)){
      cout<<i<<endl;
    }
  }
  return 0;
}
