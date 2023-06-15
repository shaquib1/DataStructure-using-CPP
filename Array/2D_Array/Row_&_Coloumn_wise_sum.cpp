#include <iostream>
using namespace std;

void row_sum(int arr[][4], int i, int j)
{

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}
void coloum_sum(int arr[][4], int i, int j)
{

    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{

    int arr[3][4];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "row wise sum : " << endl;
    row_sum(arr, 3, 4);

    cout << "coloumn wise sum: " << endl;
    coloum_sum(arr, 3, 4);

    return 0;
}