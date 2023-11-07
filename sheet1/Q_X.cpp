#include <iostream>

using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int intersectionLeft = max(l1, l2);
    int intersectionRight = min(r1, r2);

    if (intersectionLeft <= intersectionRight) {
        cout << intersectionLeft << " " << intersectionRight << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
