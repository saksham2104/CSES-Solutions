#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pii pair<int,int>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define input(v) for(auto &i : (v)) cin >> i;
#define first ff
#define second ss
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<pii> vp;
typedef vector<vector<pii>> vvp;
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template<class T, class U> void _print(pair<T, U> p) {cerr << "(" << p.first << "," << p.second << ")";}
template<class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T, class U> void _print(vector<pair<T, U>> v) {cerr << "[ "; for (auto& p : v) {_print(p); cerr << " ";} cerr << "]";}
template<class T> void _print(set<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T, class V> void _print(unordered_map<T, V> m) { cerr << "{ "; for (auto& i : m) _print(i.first), cerr << "->", _print(i.second), cerr << " "; cerr << "}"; }
template<class T, class V> void _print(map<T, V> m) { cerr << "{ "; for (auto& i : m) _print(i.first), cerr << "->", _print(i.second), cerr << " "; cerr << "}"; }
template<class T, class U, class V> void _print(map<pair<T, U>, V> m) { cerr << "{ "; for (auto& i : m) _print(i.first), cerr << "->", _print(i.second), cerr << " "; cerr << "}"; }
 
int iceil(int a, int b) { return (a + b - 1) / b; }
 
void solve() {
 
    int n,x;
    cin >> n >> x;
 
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
 
    int m = 1e9+7;
 
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int j : coins){
            if(i-j >= 0){
                dp[i] = (dp[i] + dp[i-j]) % m;   
            }
        }
    }
 
    cout << dp[x]<< endl;
 
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
 
    int t;
    t=1;
 
    while (t--) {
        solve();
    }
 
    return 0;
}