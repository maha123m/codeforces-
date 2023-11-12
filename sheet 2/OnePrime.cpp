#include <iostream>
using namespace std;

int main()
{

    int x, i, counter = 0;
    cin>>x;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            counter++;
        }
    }
    if (counter == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

