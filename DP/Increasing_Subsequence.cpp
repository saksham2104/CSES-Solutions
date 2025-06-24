/**
 *    author:  Saksham_2104
 *    created:  23.06.2025 18:48:14
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
 

void solve() {
 
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int>res;
 
    for(int i=0;i<n;i++){
 
        int curr = a[i];
 
        if(res.empty() || res.back() < curr){
            res.push_back(curr);
        }
 
        else{
            int ub = upper_bound(all(res),curr) - res.begin();
            if(ub){
                if(res[ub-1] == curr){continue;}
            }
            res[ub]=curr;
        }
    }
    cout << res.size() << endl;
 
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