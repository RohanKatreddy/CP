#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

vector<string> grid;
vector<vector<int>> dp;

const int m = 1e9+7;

int count(int n, int x, int y){
    if (dp[x][y] != -1) return dp[x][y];
    if (grid[x][y] == '*') return 0;
    if (x == n-1 && y == n-1) return 1;
    int sum = 0;
    if (x + 1 < n) sum += count(n, x+1, y);
    sum %= m;
    if (y + 1 < n) sum += count(n, x, y+1);
    sum %= m;
    dp[x][y] = sum;
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    grid.resize(n);
    for (auto &row : grid) cin >> row;
    dp.assign(n, vector<int>(n, -1));
    cout << count(n, 0, 0);
}
