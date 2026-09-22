// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLYBAGS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        if(n%10==0) {
            cout<<n/10<<endl;
        }
        else {
            cout<<n/10+1<<endl;
        }
    }
    return 0;
}
