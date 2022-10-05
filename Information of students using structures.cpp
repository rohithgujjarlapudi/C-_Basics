#include <iostream>
using namespace std;
struct student
{
  int roll_no;
  char name[30];
  int class_name;
}a[100];
int main() {
  int n,i;
  cout<<"Enter number of students"<<endl;
  cin>>n;
  for(i=0;i<n;i++)
    {
      cin>>a[i].roll_no;
      cin>>a[i].name;
      cin>>a[i].class_name;
      cout<<endl;
    }
  for(i=0;i<n;i++)
    {
      cout<<a[i].roll_no;
      cout<<a[i].name;
      cout<<a[i].class_name;
      cout<<endl;
    }
  return 0;
}
