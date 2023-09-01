#include <iostream>

using namespace std;

int binaryseach(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2; // start + (end-start)/2

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        if (key > arr[mid])    
        {
            start = mid + 1; 
        }
        else   //key less than mid than go to left part
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;  // start + (end-start)/2
    }

    return -1;
}

int main()
{

    int arr[5] = {4, 8, 9, 14, 25};

    int findIndex = binaryseach(arr, 5, 25);
    cout << "index of key is : " << findIndex << endl;

    return 0;
};