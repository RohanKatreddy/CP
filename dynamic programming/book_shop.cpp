#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

vector<int> prices;
vector<int> numPages;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;
    prices.resize(n);
    numPages.resize(n);
    for (auto &price : prices){
        cin >> price;
    }
    for (auto &pages : numPages){
        cin >> pages;
    }

    vector<int> dp(x+1, 0);
    for (int j = 0; j < n; j++){
        for (int i = x; i >= prices[j]; i--){
            dp[i] = max(dp[i], dp[i - prices[j]] + numPages[j]);
        }
    }

    cout << dp[x];
}
