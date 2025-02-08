#include<iostream>
using namespace std;

int factorial(int num){
     int fac = 1;
     for(int i=1;i<=num;i++){
        fac = fac*i;
     }
     return fac;
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int ans = factorial(num) ;
    cout<<"Factorial of given number is: "<<ans;
    return 0;
}