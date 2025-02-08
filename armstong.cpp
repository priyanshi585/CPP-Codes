#include<iostream>
using namespace std;
int main()
{
    int num , rem , sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int org_num = num ;
    while(num!=0){
     rem = num%10;
     sum = sum + (rem*rem*rem);
     num = num/10;

    }
    if(sum==org_num){
        cout<<"ARMSTRONG NUMBER."<<endl;
    }
    else{
        cout<<"NOT ARMSTRONG NUMBER."<<endl;
    }
    return 0;
}