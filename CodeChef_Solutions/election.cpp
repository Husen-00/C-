// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,x;
    cin>>t;
    while(t--) {
        cin>>n>>x;
        int  ages[n];
        for(int i=0; i<n; i++) {
            cin>>ages[i];
        }
        int elegibility = 0;
        for(int i=0; i<n; i++) {
            if(ages[i] >= x) {
                elegibility++;
            }
        }
        cout<<elegibility<<endl;
    }
    return 0;
}
