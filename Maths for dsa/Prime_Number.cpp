#include <iostream>
using namespace std;

bool isPrime(int num)
{

    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            return false;
        }
        
        return true;
    }

    
}

int main()
{

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int ans = isPrime(num);
    cout << "Number is prime or not: " << ans << endl;

    return 0;
}