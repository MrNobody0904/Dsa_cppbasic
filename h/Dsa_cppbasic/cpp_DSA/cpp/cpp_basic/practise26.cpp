
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;

    cout << "Prime factors of " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {   // if i divides n
            cout << i << " ";
            n /= i;            // reduce n
            count++;
        }
    }

    if (count == 0) {
        cout << "No prime factors found";
    }

    cout << endl;
    return 0;
}
