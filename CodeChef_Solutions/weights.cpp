// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WGHTS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, w, x, y, z;
    cin>>t;
    while(t--) {
        cin>>w>>x>>y>>z;
        if(w==x || w==y || w==z || x+y==w || x+z==w || y+z==w || w==x+y+z) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}
