// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        long long result = 1;
        for(int i=1; i<=n; i++) {
            result *= i;
        }
        cout<<result<<endl;
    }
}
