#include <iostream>
using namespace std;

int mergeSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int printSortArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, n);
    cout << "Sorted array is : ";

    printSortArr(arr, n);

    return 0;
}