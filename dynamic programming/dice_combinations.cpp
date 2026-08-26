#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

unordered_map<int, long long> m;
const long long MOD = 1e9 + 7;

int solve(int x){
    if (x == 0) return 1;
    if (m.find(x) != m.end()) return m[x];
    long long count = 0;
    for (int i = 1; i <= min(6, x); i++){
        count = (count + solve(x-i)) % MOD;
    }
    m[x] = count;
    return count;
}

int main() {
    int x;
    cin >> x;
    cout << solve(x);
}
