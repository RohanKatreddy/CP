#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;

int biggest_digit(int x){
    int big = 0;
    int dig;
    while (x >0){
        dig = x % 10;
        big = max(dig, big);
        x = x / 10;
    }
    return big;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    while (n > 0){
        n -= biggest_digit(n);
        count++;
    }

    cout << count;
    return 0;
}
