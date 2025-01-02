//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>
#include <cmath>

using namespace std;
void solve() { 
    set<int> multiples;
    int x =1;
    while(x < 100 * 100) {
        int temp = pow(x, 2);
        multiples.emplace(temp);
        x  = x  + 1;
    }   s
    for(int iter : multiples) cout << iter << "\n";

    // int t;
    // cin >> t;
    // while(t--) {
    //     long n;
    //     cin >> n;

    // }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
