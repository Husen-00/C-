//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<(n-(n/5))<<endl;
    }
    return 0;
}
