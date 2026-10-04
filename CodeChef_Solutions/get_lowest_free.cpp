// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, a, b, c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        int total_sum = a+b+c;
        int min_price = min({a, b, c});
        cout<<total_sum-min_price<<endl;
    }
    return 0;
}
