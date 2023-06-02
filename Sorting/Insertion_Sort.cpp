
// insertion sort by which we can sort an array in which time complaxity is very less than other sorting algorithm.
// in this sorting we shift element not swaping remember 

#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{

    int i, j;

    for (i = 1; i < n; i++)
    {

        int temp = arr[i];

        for (j = i - 1; j >= 0; j--)
        {

            if (arr[j] > temp)
            {

                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }

            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted array is : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]
             << " ";
    }
}

int main()
{

    int arr[100];
    int n;
    cout << "enter the size of the array : ";

    cin >> n;

    cout << "enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    insertionsort(arr, n);

    return 0;
}