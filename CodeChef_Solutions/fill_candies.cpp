//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k,m;
    cin>>t;
    while(t--) {
        cin>>n>>k>>m;
        int capacity = k*m;
        int bags = (n+capacity-1) / capacity;
        cout<<bags<<endl;
    }
    return 0;
}
