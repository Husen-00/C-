// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        cout<<min(x, n-x) <<endl;
    }
    return 0;
}
