#include<iostream>
using namespace std;

int getLenght(char name[]){
     int i;
    int count =0;
    for(int i=0;name[i]!=0 ;i++)
    {
       count++ ;
    }
    return count;
}

void reversedString(char name[] , int count){
    cout<<"Reversed String: ";
    
    for(int i=count ;i>=0 ;i--)
    {
       cout<<name[i];
    }
}

int main()
{
    char name[20] ;
    cout<<"Enter your name: "<<endl;
    cin>>name ;
    cout<<"Your name is: "<<name<<endl;
    int len = getLenght(name);
    reversedString(name , len);
    return 0;
}