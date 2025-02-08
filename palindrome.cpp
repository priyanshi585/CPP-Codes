#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    int org_num = num;
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << "Reversed Number: " << rev << endl;
    if (org_num == rev)
    {
        cout << "The given number is a PALINDROME." << endl;
    }
    else
    {
        cout << "The given Number is not a Palindrome." << endl;
    }
    return 0;
}