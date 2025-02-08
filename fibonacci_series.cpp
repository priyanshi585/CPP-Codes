#include <iostream>
using namespace std;
int main()
{
    int pr, prpr, next;
    int n;
    cout << "Enter number till which you want fibonacci series: " << endl;
    cin >> n;
    pr = 1;
    prpr = 0;
    cout << "Fibonacci series: " << prpr << " " << pr << " ";
    for (int i = 1; i <= n; i++)
    {
        next = pr + prpr;
        cout << next << " ";
        prpr = pr;
        pr = next;
    }
    return 0;
}