// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, x, y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        int chef_floor = (x+9)/10;
        int chefina_floor = (y+9)/10;
        int deff = abs(chef_floor - chefina_floor);
        cout<<deff<<endl;
    }
    return 0;
}
