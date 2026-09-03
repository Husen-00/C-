// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x1,y1,x2,y2;
    cin>>t;
    while(t--) {
        cin>>x1>>y1>>x2>>y2;
        int ans = max(abs(x1-x2), abs(y1-y2));
        cout<<ans<<endl;
    }
    return 0;
}
