// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, p,q;
    cin>>t;
    while(t--) {
        cin>>p>>q;
        int total_points = p+q;
        if((total_points/2) % 2 == 0) {
            cout<<"Alice"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
