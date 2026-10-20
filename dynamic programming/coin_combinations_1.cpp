#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
int m[1000000+9];
vector<int> c;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temp, n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++){
        cin >> temp;
        c.PB(temp);
    }

    m[0] = 1;
    for (int i = 1; i <= d; i++){
        for (auto j : c){
            if (i - j >= 0)
            m[i] = (m[i] + m[i-j]) % MOD;
        }
    }

    cout << m[d] << '\n';
}
