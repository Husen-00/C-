// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FCTRL2
#include <iostream>
using namespace std;

#define MAX 500

// Function to multiply a number x with the array res[]
int multiply(int x, int res[], int res_size) {
    int carry = 0;  // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  // Store last digit of product in res[i]
        carry = prod / 10;   // Put rest in carry
    }

    // Put carry in res and increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

// Function to find factorial of a large number
void factorial(int n) {
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula: res = 1 * 2 * 3 * ... * n
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);

    // Print result in reverse order (since least significant digit is stored at index 0)
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
    cout << endl;
}

int main() {
    // Optimize input/output operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        factorial(n);
    }
    return 0;
}
