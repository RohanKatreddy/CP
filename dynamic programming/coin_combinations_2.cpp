#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;

const int m = 1e9+7;
const int N = 1e6;


int main(){

    int n, x;
    cin >> n >> x;
    vector<int> c;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        c.push_back(temp);
    }

    vector<int> counted(x+1, 0);

    counted[0] = 1;


    for (int coin : c){
        for (int i = coin; i <= x; i++){
            counted[i] += counted[i-coin];
            counted[i] %= m;
        }
    }

    cout << counted[x];

    return 0;
}