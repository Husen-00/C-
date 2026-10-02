// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a, b,k;
    cin>>t;
    while(t--) {
        cin>>a>>b>>k;
        int dist = abs(a-b);
        int steps = (dist + k-1) / k;
        cout<<steps<<endl;
    }
    return 0;
}
