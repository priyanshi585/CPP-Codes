#include <iostream>
using namespace std;
int main()
{
    int a, b, flag = 1, max_num;
    cout << "Enter the values of 2 numbers: " << endl;
    cin >> a >> b;
    max_num = (a > b) ? a : b;
    while(true){
        if (max_num % a == 0 && max_num % b == 0)
        {
            cout << "LCM of given numbers is : " << max_num << endl;
            break;
        }
        else{
            ++max_num;
        }
    }
        
    return 0;
}