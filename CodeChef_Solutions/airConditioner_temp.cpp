// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, b, c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if(a<=b && c<=b) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
