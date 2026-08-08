// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, n;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%4==0) {
            cout<<"Good"<<endl;
        }
        else {
            cout<<"Not Good" <<endl;
        }
    }
    return 0;
}
