#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long minimum, maximum;

    // Find the minimum
    if (a <= b && a <= c) {
        minimum = a;
    } else if (b <= a && b <= c) {
        minimum = b;
    } else {
        minimum = c;
    }

    // Find the maximum
    if (a >= b && a >= c) {
        maximum = a;
    } else if (b >= a && b >= c) {
        maximum = b;
    } else {
        maximum = c;
    }

    cout << minimum << " " << maximum;

    return 0;
}
