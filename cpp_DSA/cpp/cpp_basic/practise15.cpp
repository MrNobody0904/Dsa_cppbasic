#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}