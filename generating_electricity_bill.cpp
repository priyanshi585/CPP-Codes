#include<iostream>
using namespace std;
int main()
{
    int lmu , cmu , uc , bill ;
    cout<<"Enter last month unit: "<<endl;
    cin>>lmu;
    cout<<"Enter current month unit: "<<endl;
    cin>>cmu;
    uc = cmu-lmu;
    if(uc>0 && uc<=100){
        bill = uc*2 ;
    }
    else if(uc>101 && uc<=200){
        bill = uc*3 ;
    }
    else if(uc>201 && uc<=300){
        bill = uc*4 ;
    }
    else if(uc>301){
        bill = uc*5 ;
    }
    else{
        cout<<"Please enter valid details."<<endl;
    }
    cout<<"Units Consumed: "<<uc<<endl;
    cout<<"Bill: "<<bill<<endl;
    return 0;
}