//https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/FLOW014
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double H, C, TS;
        cin >> H >> C >> TS;

        int a = (H > 50);
        int b = (C < 0.7);
        int c = (TS > 5600);

        int count = a + b + c;

        if (count == 3)
            cout << 10 << endl;
        else if (count == 2) {
            if (a && b)
                cout << 9 << endl;
            else if (b && c)
                cout << 8 << endl;
            else
                cout << 7 << endl;
        }
        else if (count == 1)
            cout << 6 << endl;
        else
            cout << 5 << endl;
    }

    return 0;
}
