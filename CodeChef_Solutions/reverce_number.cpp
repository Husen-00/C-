//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int reverce_num= 0;
        while(n>0) {
        int digit = n%10;
        reverce_num = reverce_num * 10+digit;
        n/=10;
        }
        cout<< reverce_num <<endl;
    }
    return 0;
}
