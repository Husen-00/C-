// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MILEAGE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y, a, b;
        cin >> n >> x >> y >> a >> b;

        int petrol = x * b;
        int diesel = y * a;

        if (petrol < diesel) {
            cout << "PETROL" << endl;
        }
        else if (diesel < petrol) {
            cout << "DIESEL" << endl;
        }
        else {
            cout << "ANY" << endl;
        }
    }

    return 0;
}
