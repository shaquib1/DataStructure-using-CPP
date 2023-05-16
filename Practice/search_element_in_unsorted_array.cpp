#include <iostream>
using namespace std;

int search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
       
    }
    return -1;
}

int main()
{

    int arr[100];
    int n;
    int k;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the element you want to search in the array : ";
    cin>>k;

    cout << "Element is present at index : " << search(arr, n, k);

    return 0;
}