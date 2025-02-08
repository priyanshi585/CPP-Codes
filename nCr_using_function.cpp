#include<iostream>
using namespace std;

int factorial(int num){
    int fac = 1;
    for(int i=1;i<=num;i++){
        fac = fac*i;
    }
    return fac ;
}

int nCr(int n , int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    int ans = numerator / denominator;
    return ans ;
}

int main()
{
    int n , r;
    cout<<"Enter the values of n and r: "<<endl;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<"nCr of given number is: "<<ans;
    return 0;
}