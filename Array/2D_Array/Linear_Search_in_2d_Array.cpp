

#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
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

    // for printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the target you want to find : ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "element is found " << endl;
    }
    else
    {
        cout << "element is not found";
    }

    return 0;
}