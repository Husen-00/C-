// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x;
    cin>>t;
    while(t--) {
        cin>>x;
        int final_state = x%3;
        if(final_state == 0) {
            cout<<"NORMAL"<<endl;
        }
        else if(final_state==1) {
            cout<<"HUGE"<<endl;
        }
        else {
            cout<<"SMALL"<<endl;
        }
    }
    return 0;
}
