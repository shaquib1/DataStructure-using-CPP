
// this program to reverse the array using input from user
/*
#include <iostream>
using namespace std;

int main()
{

    int arr[100];
    int size;

    cout << "Enter the size of the array : " << endl;

    cin >> size;

    cout << "Enter the elements of the array : " << endl;

    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    cout << "After reverse the array : " << endl;

    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

// this is another method to reverse the array using swap method

#include <iostream>
using namespace std;



int main()
{

    int size;
    int arr[122];

    cout << "enter the size of the array : ";
    cin >> size;

    cout << "enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

 int s = 0;
    int e = size - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}