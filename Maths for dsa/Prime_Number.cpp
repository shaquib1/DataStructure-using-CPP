#include <iostream>
using namespace std;

bool isPrime(int num)    // a prime number is number who is divisible by 1 and itself;
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

    // int ans = isPrime(num);
    // cout << "Number is prime or not: " << ans << endl;

    if (isPrime(num))
    {
        cout << "Number is Prime";
    }
    else
    {
        cout << "Number is not Prime";
    }

    return 0;
}