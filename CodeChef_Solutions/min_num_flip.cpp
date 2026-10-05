// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int current_sum = 0;
        for(int i=0; i<n; i++) {
            int val;
            cin>>val;
            current_sum += val;
        }
        if(n%2!=0) {
            cout<<-1<<endl;
        }
        else {
            int ops = abs(current_sum) / 2;
            cout<<ops<<endl;
        }
    }
    return 0;
}
