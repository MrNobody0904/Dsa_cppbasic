#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int line = 0; line < n; line++) {
        int value = 1;  // First value in a line is always 1
        for (int space = 0; space < n - line - 1; space++) {
            cout << "  ";  // spacing for triangle shape
        }
        for (int i = 0; i <= line; i++) {
            cout << value << "   ";
            value = value * (line - i) / (i + 1);  // next value using nCr relation
        }
        cout << endl;
    }

    return 0;
}
