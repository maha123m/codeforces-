#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    int years = n / 365;
    int months = (n % 365) / 30;  // Corrected this line
    int days = (n % 365) % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}
