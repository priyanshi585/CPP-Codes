#include<iostream>
using namespace std;

bool checkPalindrome(char name[] , int n)
{
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(name[start]!= name[end])
        {
            return 0;
        }
        else{
            start++ ;
            end-- ;
        }
    }
    return 1;
}

int getLenght(char name[]){
     int i;
    int count =0;
    for(int i=0;name[i]!=0 ;i++)
    {
       count++ ;
    }
    return count;
}

void reversedString(char name[] , int n){
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        swap(name[start++] , name[end--]);
    }
}

int main()
{
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name ;
    cout<<"Your name is: "<<name<<endl;
    int len = getLenght(name);
    // reversedString(name , len);
    int ans = checkPalindrome(name,len);
    if(ans==1)
    {
        cout<<"The given string is PALINDROME."<<endl;
    }
    else{
        cout<<"NOT a palindorme."<<endl;
    }
    return 0;
}