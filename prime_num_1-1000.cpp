#include<iostream>
using namespace std;
int main()
{
    int onlyTwo=2;
    for(int i=1;i<=1000;i++){
        int factorCount = 0 ;
        for(int j=1;j<=1000;j++){
            if(i%j==0){
                factorCount++ ;
            }  
        }
       if(factorCount==onlyTwo){
            cout<<i<<" is PRIME."<<endl;
        } 
    }
    return 0;
}