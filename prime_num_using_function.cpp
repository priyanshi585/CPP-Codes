#include<iostream>
using namespace std;

void isPrime(int num){
    int factorCount = 0 , onlyTwo = 2;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            factorCount++ ;
        }
    }
    if(factorCount==onlyTwo){
        cout<<"Prime Number."<<endl;
    }
    else{
        cout<<"Not a Prime Number."<<endl;
    }
}

int main()
{
   int num;
   cout<<"Enter a number: "<<endl;
   cin>>num;
    isPrime(num);
    return 0;
}