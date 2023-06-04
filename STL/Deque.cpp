//  you can use push and pop operation on both side on front(starting) and back(ending).

#include <iostream>
#include <deque>
using namespace std;

int main()
{

   deque<int> d;

   d.push_back(3);
   d.push_front(4);
   d.push_front(5);

   // for each loop for printing deque
   for (int i : d)
   {
      cout << i << " ";
   }

   cout << endl;

   // d.pop_front();  delete element from starting side
   // d.pop_back();  delete element form back side means ending side
   cout << "index 1 element is : " << d.at(1) << endl;
   cout << "front element is : " << d.front() << endl;
   cout << "back element is : " << d.back() << endl;
   cout << "size of the deque : " << d.size() << endl;

   // to erase element from deque use erase();
   // in which you tell you want to erase element in range or single element

   d.erase(d.begin(), d.begin() + 2); // it means delete 1st element

   // now we check size of the deque we find 1 size is decrease because 1 element is erase
   cout << "after erase size of deque : " << d.size();

   return 0;
}