// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    long x, y;
    cin>>t;
    while(t--) {
        cin>>x;
        cin>>y;
        if(2*y >= x) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<< endl;
        }
    }
    return 0;
}
