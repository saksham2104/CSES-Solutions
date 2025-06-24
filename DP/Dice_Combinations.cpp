/**
 *    author:  Saksham_2104
 *    created:  05.06.2025 17:56:26
 **/
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define pii pair<int,int>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define input(v) for(auto &i : (v)) cin >> i;
#define pb push_back
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
 
#define ffor(n) for(int i=0; i<n; i++)
#define each(a, x) for (auto &a : x)
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) {cerr << t;}
void _print(bool t) {cerr << (t ? "true" : "false");}
void _print(string t) {cerr << '"' << t << '"';}
void _print(char t) {cerr << '\'' << t << '\'';}
void _print(double t) {cerr << t;}
 
template<class T> void _print(vector<T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<> void _print(vector<bool> v) {cerr << "[ "; for (bool b : v) {_print(b); cerr << " ";} cerr << "]";}
template<> void _print(vector<string> v) {cerr << "[ "; for (auto &s : v) {_print(s); cerr << " ";} cerr << "]";}
template<> void _print(vector<char> v) {cerr << "[ "; for (char c : v) {_print(c); cerr << " ";} cerr << "]";}
template<> void _print(vector<pii> v) {cerr << "[ "; for (auto &p : v) {cerr << "("; _print(p.first); cerr << ", "; _print(p.second); cerr << ") ";} cerr << "]";}
 
template<class T, class U> void _print(map<T, U> m) {cerr << "{ "; for (auto &i : m) {_print(i.first); cerr << " -> "; _print(i.second); cerr << "; ";} cerr << "}";}
template<class T, class U> void _print(unordered_map<T, U> m) {cerr << "{ "; for (auto &i : m) {_print(i.first); cerr << " -> "; _print(i.second); cerr << "; ";} cerr << "}";}
template<class T, class U, class V> void _print(map<pair<T, U>, V> m) {cerr << "{ "; for (auto &i : m) {cerr << "("; _print(i.first.first); cerr << ", "; _print(i.first.second); cerr << ") -> "; _print(i.second); cerr << "; ";} cerr << "}";}
template<> void _print(map<int, pii> m) {cerr << "{ "; for (auto &i : m) {cerr << i.first << " -> (" << i.second.first << ", " << i.second.second << ") ";} cerr << "}";}
 
template<class T> void _print(queue<T> q) {cerr << "< "; while (!q.empty()) {_print(q.front()); cerr << " "; q.pop();} cerr << ">";}
 
int iceil(int a, int b) { return (a + b - 1) / b; }
 
 
 
void solve() {
 
    int n;
    cin >> n;
 
    int m = 1e9+7;
 
    vector<int>dp(n+1,0);
    for(int i=1;i<=6;i++){
        dp[i]= 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j > i){
                break;
            }
            dp[i] = ((dp[i] % m ) + (dp[i-j] % m)) % m;
        }
    }
 
    cout << dp[n] % m << endl;
 
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