#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;


bool match(int t, int r, int k){
    return (t >= r-k && t <= r+k);
}


int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> u, a;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        u.PB(temp);
    }
    for (int i = 0; i < m; i++){
        int temp;
        cin >> temp;
        a.PB(temp);
    }

    sort(u.begin(), u.end());
    sort(a.begin(), a.end());
    int i = 0; 
    int j = 0;
    int count = 0;
    bool done = false;
    while (i < u.size() && j < a.size()){
        if (match(a[j], u[i], k)){
            count++; i++; j++;
        }
        else if (a[j] < u[i]) j++;
        else i++;
    }
    cout << count << '\n';
}
