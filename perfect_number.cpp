#include<iostream>
using namespace std;
int main()
{
    int num , sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int org_num = num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0){
            sum = sum + i ;
        }
    }
    if(org_num==sum){
        cout<<"PERFECT NUMBER."<<endl;
    }
    else{
        cout<<"NOT A PERFECT NUMBER."<<endl;
    }
    return 0;
}