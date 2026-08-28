//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,x,k;
    cin>>t;
    while(t--) {
        cin>>n>>x>>k;
        int filled = k/x;
        int ans = min(n, filled);
        cout<<ans<<endl;
    }
    return 0;
}
