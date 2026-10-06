// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, a, b;
    cin>>t;
    while(t--) {
        cin>>n>>a>>b;
        int k = log2(n);
        int total_time = (k*a) + ((k-1)*b);
        cout<<total_time<<endl;
    }
    return 0;
}
