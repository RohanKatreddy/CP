#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
int main() {
    int n;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size() << '\n';
}
