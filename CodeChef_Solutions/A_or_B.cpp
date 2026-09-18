// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, a, b;
    cin>>t;
    while (t--) {
        cin>>x>>y;
        int scoreAB = (500 - (x*2)) + (1000-((x+y) * 4));
        int scoreBA = (1000 - (y*4)) + (500 -((x+y) *2));
        cout<<max(scoreAB, scoreBA)<<endl;
    }
    return 0;
}
