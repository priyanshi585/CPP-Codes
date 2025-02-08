#include<iostream>
using namespace std;

int main()
{
    int sum =0, rem=0 ,i;

    for( i=100;i<=999;i++)
    {
      rem = i%10;
      sum = sum+ (rem*rem*rem);
      i = i/10;
      
    }
    for(int i=100 ;i<=999;i++)
    {
if ( i == sum){
        cout<<i<<" is an ARMSTRONG number."<<endl;
    }
    else{
        cout<<i<<" Not an armstrong number." <<endl;
    }
    }


    
    return 0;
}