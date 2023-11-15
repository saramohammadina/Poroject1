#include <iostream>
using namespace std;

int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "The combination of " << n << " and " << r << " is " << combination(n, r) << endl;
    return 0;
}