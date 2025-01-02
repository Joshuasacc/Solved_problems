//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>
using namespace std;
void solve() { 
    int l, r;
    cin >> l >> r;
    int difference = abs(r - l);

    set<int> value;
    for(int k = 1; k <= difference; k++) {
        for(int i = l; i <= r; i++) {
            value.emplace(l ^ i);
        }
        ++l;
    }
    cout << *(--value.end()) << "\n";
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
