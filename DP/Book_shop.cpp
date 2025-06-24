/**
 *    author:  Saksham_2104
 *    created:  23.06.2025 19:24:17
 **/
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define all(v) (v).begin(),(v).end()
#define pb push_back
 
void solve() {
    int n, x;
    cin >> n >> x;
 
    vector<int> h(n), s(n);
    for (int i = 0; i < n; i++) cin >> h[i]; 
    for (int i = 0; i < n; i++) cin >> s[i];
 
    vector<int> dp(x + 1);
 
    for (int i = 0; i < n; i++) {
        for (int j = x; j >= h[i]; j--) {
            dp[j] = max(dp[j], s[i] + dp[j - h[i]]);
        }
    }
 
    cout << dp[x] << endl;
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
 
    int t = 1;
    while (t--) solve();
 
    return 0;
}