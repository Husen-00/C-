// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, x, p;
    cin>>t;
    while(t--) {
        cin>>n>>x>>p;
        int total_marks = x*3 - (n-x);
        if(total_marks >= p) {
            cout<<"Pass\n";
        }
        else {
            cout<<"Fail\n";
        }
    }
    return 0;
}
