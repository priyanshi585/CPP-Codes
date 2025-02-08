#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int org_num = num ;
    while(num!=0){
        rem = num%10;
        sum = sum + rem ;
        num = num/10 ;
    }
    cout<<"Sum of digits of "<<org_num<<" is : "<<sum<<endl;
    return 0;
}