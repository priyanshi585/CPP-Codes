#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size = 5;
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Actual Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nReversed Array: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}