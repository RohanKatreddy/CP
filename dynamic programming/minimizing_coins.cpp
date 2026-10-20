#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
int m[1000000+9];
vector<int> c;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        c.PB(temp);
    }


    for (int i = 1; i <= d; i++){
        m[i] = INT_MAX-1;
        for (auto j : c){
            if (i - j < 0) continue;
            m[i] = min(m[i], m[i-j]+1);
        }
    }

    cout << (m[d] >= INT_MAX-1 ? -1 : m[d]) << '\n';
}




// GOT TLE FOR THIS SOLUTION => TRYING A BOTTOM UP SOLUTION ^^

// #include <bits/stdc++.h>

// #define F first
// #define S second
// #define PB push_back
// #define MP make_pair

// using namespace std;
// unordered_map<int, int> m;
// vector<int> c;

// int solve(int x){
//     if (x == 0) return 0;
//     if (x < 0) return INT_MAX-1;
//     if (m.find(x) != m.end()) return m[x];
//     int temp = INT_MAX;
//     for (auto i : c){
//         temp = min(temp, solve(x - i)+1);
//     }
//     m[x] = temp;
//     return temp;
// }

// int main() {
//     int n, d;
//     cin >> n >> d;
//     for (int i = 0; i < n; i++){
//         int temp;
//         cin >> temp;
//         c.PB(temp);
//     }
//     int sol = solve(d);
//     if (sol == INT_MAX) cout << -1 << '\n';
//     else cout << sol << '\n';
// }
