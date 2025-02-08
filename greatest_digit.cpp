#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter a three digit number: "<<endl;
    cin>>num;
    int hund = num/100;
    num = num%100;
    int tens = num/10;
    num = num%10;
    int ones = num/1;
    num = num%1;
    
    if(hund>tens && hund>ones){
        cout<<hund<<" is greatest digit."<<endl;
    }
    else if(tens>hund && tens>ones){
        cout<<tens<<" is greatest digit."<<endl;
    }
    else{
        cout<<ones<<" is greatest digit."<<endl;
    }
    return 0;
}