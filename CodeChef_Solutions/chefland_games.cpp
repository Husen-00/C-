// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, r1, r2, r3, r4;
    cin>>t;
    while(t--) {
        cin>>r1 >> r2 >> r3 >> r4;
        if(r1 + r2 + r3 + r4 == 0) {
            cout<<"IN" <<endl;
        }
        else {
            cout<<"OUT" <<endl;
        }
    }
    return 0;
}
