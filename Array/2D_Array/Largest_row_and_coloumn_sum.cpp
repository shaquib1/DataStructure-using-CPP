
#include <iostream>
using namespace std;

int RowMaxSum(int arr[][3], int i, int j)
{

    int max = INT_MIN;
    int index = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }

    cout << "Maximum row sum is: " << max << endl;

    return index;
}

int main()
{

    int arr[3][3];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "array is: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int ans = RowMaxSum(arr, 3, 3);

    cout << "maximum sum row index: " << ans << endl;

    return 0;
}