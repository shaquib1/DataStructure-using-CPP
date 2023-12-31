#include <iostream>
using namespace std;


int main(){
    
     int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int capacity = sizeof(numbers) / sizeof(numbers[0]);  // capacity will be 10

 cout<<sizeof(numbers[0])<<"and "<<sizeof(numbers);

    return 0;
}