#include <iostream>
using namespace std;
int main()
{
    int num, factorcount = 0, onlytwofactors = 2;
    cout << "Enter a number: " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            factorcount++;
        }
    }
    if (factorcount == onlytwofactors)
    {
        cout << "PRIME NUMBER." << endl;
    }
    else
    {
        cout << "Not a prime number." << endl;
    }
    return 0;
}