#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;

    int intPart = int(n);  // Get the integer part

    if (n == intPart) {
        cout << "int " << intPart;
    } else {
        double decimalPart = n - intPart;
        cout << "float " << intPart << " " << decimalPart;
    }

    return 0;
}
