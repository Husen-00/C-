//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        cout<<(x/y) + (x%y)<< endl;
    }
}
