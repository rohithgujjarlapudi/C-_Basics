#include <iostream>
using namespace std;
int main() {
  int i,j,c=0;
  for(i=100;i<=500;i++)
    {
      for(j=1;j<=i;j++)
        {
          if(i%j==0)
            c++;
        }
      if(c==2)
        cout<<i<<endl;
      c=0;
    }
  
 
}
