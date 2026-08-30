// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FSQRT
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int sqroot = (int)floor(sqrt(n));
        cout<<sqroot<<endl;
    }
    return 0;
}
