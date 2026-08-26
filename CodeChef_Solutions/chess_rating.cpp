https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int x,y;
        cin>>x>>y;
        if(x>=y) {
            cout<<0<<endl;
        }
        else {
            int diff = y-x;
            int game = diff/8+(diff%8 != 0);
            cout<<game<<endl;
        }
    }
    return 0;
}
