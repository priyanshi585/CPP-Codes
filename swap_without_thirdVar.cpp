#include<iostream>
using namespace std;
int main()
{
    int a , b ;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    a= a+b;
    b= a-b;
    a= a-b ;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}