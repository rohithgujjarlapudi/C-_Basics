#include <iostream>
using namespace std;

int main() {
  int choice;
    int a,b;
    cout<<"Enter 1 for Addition"<<endl;
    cout<<"Enter 2 for Subtraction"<<endl;
    cout<<"Enter 3 for Multiplication"<<endl;
    cout<<"Enter 4 for Division"<<endl;
    cout<<"Enter 5 for Modulus"<<endl;
    cin>>choice;
    cin>>a>>b;
    switch(choice)
    {
        case 1 : cout<<"The Addition is "<<a+b<<endl;
                 break;
        case 2 : cout<<"The Subtraction is "<<a-b<<endl;
                 break;
        case 3 : cout<<"The Multiplication is "<<a*b<<endl;
                 break;
        case 4 : cout<<"The Division is "<<a/b<<endl;
                 break;
        case 5 : cout<<"The Modulus is "<<a%b<<endl;
                 break;
       default : cout<<"Invalid Choice"<<endl;
                 break;
    }
return 0;
}
