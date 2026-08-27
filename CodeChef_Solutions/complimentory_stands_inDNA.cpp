// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DNASTRAND
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++) {
            if(s[i]=='A') {
                cout<<'T';
            }
            else if(s[i]=='T') {
                cout<<'A';
            }
            else if(s[i]=='C') {
                cout<<'G';
            }
            else {
                cout<<'C';
            }
        }
        cout<<"\n";
    }
    return 0;
}
