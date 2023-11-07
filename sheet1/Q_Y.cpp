#include <iostream>

using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    int lastTwoDigits = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;

    cout << (lastTwoDigits < 10 ? "0" : "") << lastTwoDigits;  // Ensure leading zero if needed

    return 0;
}
