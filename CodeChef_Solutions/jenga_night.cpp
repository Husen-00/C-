// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        if(x%n==0) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}
