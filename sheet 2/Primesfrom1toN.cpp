#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;

        // Check if i is divisible by any number from 2 to i-1
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        // If i is prime, print it
        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}
