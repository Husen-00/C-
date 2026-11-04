// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/MELTGOLD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int temp = Y;
        int time = 0;

        while (temp < X) {
            time++;
            temp += time;
        }

        cout << time << endl;
    }

    return 0;
}
