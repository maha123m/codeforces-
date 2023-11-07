#include <iostream>

using namespace std;

int main()
{
    long a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    long result;

    if (s == '+')
    {
        result = a + b;
    }
    else if (s == '-')
    {
        result = a - b;
    }
    else if (s == '*')
    {
        result = a * b;
    }

    if (q == '=' && result == c)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }

    return 0;
}
