//position vala concept dekhna padega ek baar.

#include<iostream>
using namespace std;

void fibonacci(int n){
  int next , pos;
   int prpr = 0;
   int pr = 1;
   cout<<"Fibonacci Series: "<<endl;
   cout<<prpr<<" "<<pr<<" ";
   for(int i=0;i<=n-2;i++){
      next = prpr + pr;
      cout<<next<<" ";
      prpr=pr;
      pr=next;
   }
}

int main()
{
    int n, pos ;
    cout<<"Enter number till which you want series: "<<endl;
    cin>>n;
    fibonacci(n );
    return 0;

}