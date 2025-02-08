#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a four digit number: "<<endl;
    cin>>num;
    int thousand = num/1000;
    num = num%1000;
    int hund = num/100;
    num = num%100;
    int tens = num/10 ;
    num = num%10;
    int ones = num/1;
    num = num%1 ;
    int sum = thousand + ones;
    cout<<"Sum of 1st and last digit is: "<<sum<<endl;
    return 0;
}