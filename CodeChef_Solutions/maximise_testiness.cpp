// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,b,c,d;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>d;
        cout<<max(a,b) + max(c,d)<<endl;
    }
    return 0;
}
