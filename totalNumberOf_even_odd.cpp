#include<iostream>
using namespace std;
int main()
{
    int n , even_count=0 , odd_count=0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
           even_count++ ;
        }
        else{
            odd_count++ ;
        }
    }

    cout<<"Total number of even numbers: " <<even_count <<endl;
    cout<<"Total number of odd numbers: " <<odd_count <<endl;
    return 0;
}