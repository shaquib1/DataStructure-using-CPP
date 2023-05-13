// using function:

// #include <iostream>
//   using namespace std;

// void linearSearch(int a[], int n) {

//   for (int i = 0; i < size; i++) {
//     if (a[i] == n) {
//       cout << "Element found at position: " << i + 1 << endl;

//       break;
//     }
//     else{cout << "No Element Found" << endl;}
//   }

// }

// int main() {

// int size;
// cout<<"Enter the size of the array:";
// cin>>size;

//   int arr[5];
//   cout << "Please enter 4 elements of the Array" << endl;
//   for (int i = 0; i < size; i++) {
//     cin >> arr[i];
//   }
//   cout << "Please enter an element to search" << endl;
//   int num;
//   cin >> num;

//   linearSearch(arr, num);

//   return 0;
// }

// alternate method:

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int arr[size], i, num, index;
    cout << "Enter  Numbers: ";
    for (i = 0; i < size; i++)
        cin >> arr[i];
    cout << "\nEnter a Number to Search: ";
    cin >> num;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            index = i;
            break;
        }
    }
    cout << "\nFound at Index No." << index;
    cout << endl;
    return 0;
}