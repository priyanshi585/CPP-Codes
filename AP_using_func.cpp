#include<iostream>
using namespace std;
int findingTerm(int n){
    int ans = (3*n)+7 ;
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
int ans = findingTerm(n);
cout<<"Nth term of this AP (3n+7) is : "<<ans;
return 0;
}
