#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

const int INF = 0x3f3f3f3f;

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> sols(n+1, 0);
    for (int i = 1; i <= n; i++){
        int temp = i;
        sols[i] = INF;
        while(temp > 0){
            int digit = temp % 10;
            temp /= 10;
            if (digit > 0){
                sols[i] = min(sols[i], sols[i-digit] + 1);
            }
        }
    }

    cout << sols[n];
}
