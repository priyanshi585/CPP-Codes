#include<iostream>
using namespace std;
int main()
{
    int amt;
    cout<<"Enter the amount: "<<endl;
    cin>>amt;
    int thousand = amt/1000;
    amt = amt%1000;
    int five_hund = amt/500 ;
    amt = amt%500;
    int hundred = amt/100;
    amt = amt%100;
    int fifty = amt/50;
    amt = amt%50;
    int twenty = amt/20;
    amt = amt%20 ;
    int tens = amt/10;
    amt = amt%10;
    int five = amt/5;
    amt = amt%5;
    int twos = amt/2;
    amt = amt%2;
    int ones = amt/1;
    amt = amt%1;
    cout<<"Thousand Rupee Notes: "<<thousand <<endl;
    cout<<"Five Hundred Rupee Notes: "<<five_hund <<endl;
    cout<<"Hundred Rupee Notes: "<<hundred <<endl;
    cout<<"Fifty Rupee Notes: "<<fifty <<endl;
    cout<<"Twenty Rupee Notes: "<<twenty <<endl;
    cout<<"Tens Rupee Notes: "<<tens <<endl;
    cout<<"Five Rupee Notes: "<<five <<endl;
    cout<<"Twos Rupee Notes: "<<twos <<endl;
    cout<<"Ones Rupee Notes: "<<ones <<endl;
    return 0;
}