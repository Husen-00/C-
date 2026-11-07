// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FLOW005
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;

        int notes[] = {100, 50, 10, 5, 2, 1};

        for (int i = 0; i < 6; i++) {
            count += n / notes[i];
            n = n % notes[i];
        }

        cout << count << endl;
    }

    return 0;
}
