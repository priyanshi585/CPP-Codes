#include<iostream>
using namespace std;
int main()
{
  int a , b , c;
  cout<<"Enter two numbers: "<<endl;
  cin>>a>>b;
  c=a;
  a=b;
  b=c;
  cout<<"Value of a: "<<a<<endl;
  cout<<"Value of b: "<<b<<endl;
  return 0;
}