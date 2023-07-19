#include <iostream>
using namespace std;

int getMax(int arr[], int size)
{

    int maxValue = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxValue = max(maxValue, arr[i]);
    }

    return maxValue;
}

int getMin(int arr[], int size)
{

    int minValue = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minValue = min(minValue, arr[i]);
    }
    return minValue;
}

int main()
{

    int arr[100];
    int size;
    cin >> size;

    // taking element for arr;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Max value:" << getMax(arr, size) << "\n";
    cout << "Min value:" << getMin(arr, size);
    cout << "diff is: " << getMax(arr, size) - getMin(arr, size);
}