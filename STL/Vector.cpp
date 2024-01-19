

#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> v;

  v.push_back(2);
  v.push_back(4);
  v.push_back(5);

  // for each loop for print vector

  for (int i : v)
  {

    cout << i << " ";
  }

  // capacity
  cout << "capacity of vector : " << v.capacity() << endl;

  // size of vector
  cout << "size of vector : " << v.size() << endl;

  // for getting index 2 element
  cout << "Element at index 2 : " << v.at(2);

  // for getting 1st element
  cout << "first element is :" << v.front();

  // for getting last element
  cout << "last element is : " << v.back();

  // v.pop_back();  is used to removing an element

  // v.clear();  is used to clear all element from a vector

  // vector<int>  new(v);  it means copy a vector in another vector

  // vector<int> vec( 5, 2);  Here 5 is size of vector and 2 is initialze of every element (means 2 2 2 2 2 vector)

  return 0;
}