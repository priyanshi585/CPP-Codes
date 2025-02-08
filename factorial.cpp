#include<iostream>
using namespace std;
int main()
{
    int num , fac=1;
    cout<<"Enter a number: "<<endl;
    cin>>num ;
    int org_num = num ;
    if(num==0 || num==1){
        fac = 1 ;
    }
    else{
        for(int i=1;i<=num;i++){
            fac = fac*i ;
        }
    }
    cout<<"Factorial of "<<org_num<<" is: " << fac<<endl;
    return 0;
}