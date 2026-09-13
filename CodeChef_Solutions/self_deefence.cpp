// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, count=0;
        cin>>n;
        int age[n];
        for(int i=0; i<n; i++) {
            cin>>age[i];
            if(age[i] >= 10 && age[i] <= 60) {
                count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}
