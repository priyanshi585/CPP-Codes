#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a three digit number: "<<endl;
    cin>>num;
    int org_num = num;
    int hund = num/100;
    num = num%100;
    int tens = num/10;
    num = num%10;
    int ones = num/1;
    num = num%1;
    int new_num = (hund*hund*hund) + (tens*tens*tens) + (ones*ones*ones) ;
    if(new_num == org_num){
        cout<<"The given number is ARMSTRONG number. "<<endl;
    }
    else{
        cout<<"The given number is not a armstrong number. "<<endl;
    }
    return 0;
}