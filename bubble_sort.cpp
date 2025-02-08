#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}