#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' ||ch =='U'){
        cout<<"The given character is a VOWEL. "<<endl;
    }
    else{
        cout<<"The given character is a CONSONANT." <<endl;
    }
    return 0;
}