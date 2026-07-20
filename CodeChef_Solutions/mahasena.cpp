// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AMR15A
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, array[100], even=0, odd=0;
    if (!(cin>>n))   return 0;
    for(int i=0; i<n; i++) {
        cin>> array[i];
        if(array[i] %2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
        if(even > odd) {
            cout<<"READY FOR BATTLE"<<endl;
        }
        else {
            cout<<"NOT READY"<< endl;
        }
    return 0;
}
