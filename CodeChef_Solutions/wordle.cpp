// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/WORDLE
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    while (n--) {
        string S, T, M = "";
        cin >> S >> T;

        for (int i = 0; i < 5; i++) {
            if (S[i] == T[i])
                M += 'G';
            else
                M += 'B';
        }

        cout << M << endl;
    }

    return 0;
}
