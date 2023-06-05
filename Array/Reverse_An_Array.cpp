
// method 1
/*
#include <iostream>
using namespace std;

int main()
{

  int arr[20];
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;
  cout << "Enter the elements of the array: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];

  }

    cout<<"After reverse : ";
  for (int i = size-1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
*/

// method 2

#include <iostream>
using namespace std;

int main()
{

  int arr[100];
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int start = 0;
  int end = size - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  cout << "after reverse the array: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}