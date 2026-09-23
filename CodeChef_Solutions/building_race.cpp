// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, x, y;
    cin>>t;
    while(t--) {
        cin>>a>>b>>x>>y;
        if(a*y < b*x) {
            cout<<"Chef\n";
        }
        else if(b*x < a*y) {
            cout<<"Chefina\n";
        }
        else {
            cout<<"Both\n";
        }
    }
    return 0;
}
