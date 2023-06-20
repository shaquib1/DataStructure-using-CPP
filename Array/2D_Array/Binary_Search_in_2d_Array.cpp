#include <iostream>
using namespace std;

bool searchMatrix(int arr[][3], int i, int j, int target)
{

    int start = 0;
    int end = i * j - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        int element = arr[mid / j][mid % j];

        if (element == target)
        {
            return true;
        }

        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return false;
}

int main()
{

    int arr[4][3];
    cout << "enter the element of the array: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "printing array: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ans = searchMatrix(arr, 4, 3, 21);
    cout << "check target is found or not: " << ans;

    return 0;
}