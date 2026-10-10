// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int degree = 0;
        for (int i=0; i<n; i++) {
            int coeff;
            cin>>coeff;
            if(coeff != 0) {
                degree = i;
            }
        }
        cout<<degree<<endl;
    }
}
