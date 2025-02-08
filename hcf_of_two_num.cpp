#include <iostream>
using namespace std;
int main()
{
    int a, b, hcf;
    cout << "Enter the values of 2 numbers: " << endl;
    cin >> a >> b;
    hcf = (a < b) ? a : b;
    while(hcf>0){
        if (a % hcf == 0 && b % hcf == 0 )
        {
            cout << "HCF of given numbers is : " << hcf << endl;
            break;
        }
        else{
            --hcf;
        }
    }
        
    return 0;
}