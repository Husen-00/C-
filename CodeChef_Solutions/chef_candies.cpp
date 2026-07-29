// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, x;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        if(n<=x) {
            cout<<0<<endl;
        }
        else {
        int h = n-x;
        cout<<(h+3)/4<< endl;
        }
    }
    return 0;
}
