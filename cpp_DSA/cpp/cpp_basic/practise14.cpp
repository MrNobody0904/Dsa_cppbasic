#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, sum = 0, t;

    cout << "Enter the number: ";
    cin >> n;

    t = n;  

    while (n != 0) {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    if (t == sum) {
        cout << "It is a palindrome number." << endl;
    } else {
        cout << "It is not a palindrome number." << endl;
    }

    return 0;
}