#include<iostream>
using namespace std;
int main()
{
    int n ;
    float sum=0 , fac=1 ;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fac = fac *i ;
        sum = sum + (1/(float)fac); 
       
    }
    cout<<"Sum of Series: "<<endl;
    for(int i=1;i<n;i++){
        cout<<"1/"<<i<<"!"<<" + " ;
    }
    cout<<"1/"<<n<<"!"<<" = " ;
    cout<<sum;
    return 0;
}