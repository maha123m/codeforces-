#include <iostream>

using namespace std;

int main()
{
    // loop from a to b given: A ≤ B
    int a, b;
    cin >> a >> b;
    int counter = 0;

    for (int i = a; i <= b; i++)
    {
        int flag = 0;
        int number = i;

        while (number != 0)
        {
            int digit = number % 10; // Fix: Changed digit%i to number%10
            number = number / 10;

            if (digit != 7 && digit != 4)
            {
                flag = 1;
                break; // Fix: Added a break statement to exit the loop when a non-lucky digit is found
            }
        }

        if (flag == 0)
        {
            cout << i << " ";
            counter++;
        }
    }

    if (counter == 0)
        cout << -1;

    return 0;
}
