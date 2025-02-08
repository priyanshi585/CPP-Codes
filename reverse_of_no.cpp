#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a three digit number: "<<endl;
    cin>>num;
    int hundred = num/100 ;
    num = num%100;
    int tens = num/10;
    num = num%10;
    int ones = num/1;
    num= num%1;
    int sum_of_digits = hundred + tens + ones ;
    cout<<"Reverse of the number : "<<ones<<tens<<hundred <<endl;
    return 0;
}

//using while loop:
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a three digit number: "<<endl;
    cin>>num;
    int rev = 0 , rem;
    while(num!=0){
        rem = num%10;
        rev = rev*10 +rem ;
        num = num/10;
    }
    cout<<"Reverse of a number is: "<<rev ;
    return 0;
}