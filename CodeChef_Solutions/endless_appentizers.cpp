// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, y, r;
    cin>>t;
    while(t--) {
        cin>>x>>y>>r;
        int a = (r / 30) + x;
        int b = (a + y - 1) / y;
        cout<< b << endl;
    }
    return 0;
}
