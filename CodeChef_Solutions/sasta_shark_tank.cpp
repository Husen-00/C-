// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        if(2*a>b) {
            cout<<"FIRST\n";
        }
        else if(2*a<b) {
            cout<<"SECOND\n";
        }
        else {
            cout<<"ANY"<<endl;
        }
    }
    return 0;
}
