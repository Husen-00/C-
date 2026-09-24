// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, y, a, b;
    cin>>t;
    while(t--) {
        cin>>x>>y>>a>>b;
        int medals = 0;
        if(x!=a && x!=b) {
            medals++;
        }
        if(y!=a && y!=b) {
            medals++;
        }
        cout<<medals<<endl;
    }
    return 0;
}
