#include<iostream>
using namespace std;
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" " ;
    }
}
int main()
{
int n ;
cout<<"Enter number till which youn want to print counting: "<<endl;
cin>>n;
printCounting(n);
return 0;
}