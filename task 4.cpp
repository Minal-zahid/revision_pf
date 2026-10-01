#include <iostream>
using namespace std;

void rotateHalves(int arr[], int size)
{
    int mid = size / 2;

   
    int temp = arr[mid - 1];

    for (int i = mid - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;

    
    temp = arr[size - 1];

    for (int i = size - 1; i > mid; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[mid] = temp;
}

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    rotateHalves(arr, size);

    cout << "Modified array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}

