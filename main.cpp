#include <iostream>
using namespace std;

// Function to calculate binomial coefficients recursively
int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1; // Base case
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k); // Recursive case
}

int main() {
    int n, k;
    cout << "Enter values for n and k: ";
    cin >> n >> k;

    if (k > n || n < 0 || k < 0) {
        cout << "Invalid input. Ensure that 0 <= k <= n." << endl;
        return 1;
    }

    int result = binomialCoeff(n, k);
    cout << "Binomial Coefficient C(" << n << ", " << k << ") = " << result << endl;

    return 0;
}
