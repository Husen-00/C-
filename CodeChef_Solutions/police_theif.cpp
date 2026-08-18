// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        cout<<abs(x-y)<<endl;
    }
    return 0;
}
