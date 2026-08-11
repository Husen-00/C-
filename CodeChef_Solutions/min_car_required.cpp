// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    int cars;
    cin>>t;
    while(t--) {
        cin>>n;
        cars = (n+3) / 4;
        cout<<cars<<endl;
    }
    return 0;
}
