// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long x, y;
        cin>>x>>y;
        long long month = (y - 1) / x;
        cout<<month<<endl;
    }
    return 0;
}
