// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    int total1 = 0, total2 = 0;
    int maxLead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int s, t;
        cin >> s >> t;

        total1 += s;
        total2 += t;

        int currentLead = total1 - total2;
        int absLead = abs(currentLead);

        if (absLead > maxLead) {
            maxLead = absLead;
            winner = (currentLead > 0) ? 1 : 2;
        }
    }

    cout << winner << " " << maxLead << "\n";

    return 0;
}
