// #include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;

void solve() { 
    int x = 0, y = 0;
    for(int i = 1; i <= 5; i++) {
        for(int k = 1; k <= 5; k++) {
            int temp;
            cin >> temp;
            if(temp == 1) {
                x = i;
                y = k;
                break;
            }
        }
    }
     cout << (abs(3 - x) + abs(3 - y)) << "\n";    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
