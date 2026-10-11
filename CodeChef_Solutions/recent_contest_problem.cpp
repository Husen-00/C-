// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int start = 0;
    int itemcount = 0;
    for(int i=0; i<n; i++) {
        string code;
        cin>>code;
        if(code=="START38") {
            start++;
        }
        else {
            itemcount++;
        }
    }
    cout<<start<<" "<<itemcount<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
