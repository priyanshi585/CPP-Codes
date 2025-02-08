#include<iostream>
using namespace std;
int main()
{
    char ch ;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"The given character is UPPERCASE."<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"The given character is LOWERCASE." <<endl;
    }
    else{
        cout<<"The given charcater is not a alphabetic character."<<endl;
    }
    return 0;
}