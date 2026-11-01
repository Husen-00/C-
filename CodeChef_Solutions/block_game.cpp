// https://www.codechef.com/practice/course/logical-problems/DIFF1000/problems/PALL01
#include <bits/stdc++.h>
using namespace std;
int main() {
int T, N;
cin>>T;
while (T--) {
  cin>>N;
  int original = N;
  int reverse = 0;
  while (N > 0) {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }
  if (original == reverse) {
        cout << "wins" << endl;
    }
  else {
        cout << "loses" << endl;
    }
}

return 0;
}
