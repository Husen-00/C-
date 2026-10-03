// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, h, x, y;
    cin>>t;
    while(t--) {
        cin>>h>>x>>y;
        int remaining_health = h - y;
        if(remaining_health <= 0) {
            cout<<1<<endl;
        }
        else {
            int normal_attack = (remaining_health + x - 1) / x;
            cout<<1+normal_attack<<endl;
        }
    }
    return 0;
}
