// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A
#include <bits/stdc++.h>
using namespace std;
int main() {
     int t, n, k;
     cin>>t;
     while(t--) {
         cin>>n>>k;
         int wolverine_cont = 0;
         for(int i=0; i<n; i++) {
             int a;
             cin>>a;
             if((a+k) % 7 ==0) {
                 wolverine_cont++;
             }
         }
         cout<<wolverine_cont<<endl;
     }
     return 0;
}
