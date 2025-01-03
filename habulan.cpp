// #include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;

void solve() { 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string result = "";
        for(int i = 0; i <= n; i++) {
            if(i % 2 == 0) {
                result = "Sakurako"; 
            }else result = "Kosuke";
        }
        cout << result << "\n";
    }

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
