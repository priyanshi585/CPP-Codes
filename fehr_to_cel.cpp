#include<iostream>
using namespace std;
int main()
{
    float F ;
    cout<<"Enter temperature in Fehrenite: "<<endl;
    cin>>F;
    float C = ((F-32)*(0.555)) ;
    cout<<"Temperature in celcius: "<<C<<endl;
    return 0;
}