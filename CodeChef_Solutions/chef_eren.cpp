// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, a, b;
    cin>>t;
    while(t--) {
        cin>>n>>a>>b;
        int even_count = n/2;
        int odd_count = n-even_count;
        int total_duration = (even_count * a) + (odd_count * b);
        cout<<total_duration<<endl;
    }
    return 0;
}
