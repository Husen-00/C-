// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a = 0;
        for(int i=2; i<=n-1; i++) {
            if(n%i==0) {
                a=1;
                break;
            }
        }
        if(n==1) {
            cout<<"no"<<endl;
        }
    else if(a==0) {
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }
 }
    return 0;
}
