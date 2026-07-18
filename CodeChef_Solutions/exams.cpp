//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, y, z;
    cin>> t;
    while(t--) {
        cin>>x;
        cin>>y;
        cin>>z;
        if(z>(x*y)/2) {
            cout<<"YES" << endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
