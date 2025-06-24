/**
 *    author:  Saksham_2104
 *    created:  24.06.2025 11:58:18
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
    int n, m;
    cin >> n >> m;

    vector<vector<pii>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].pb({b, c});
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vi dist(n + 1, LLONG_MAX);
    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, node] = pq.top();
        pq.pop();

        for (auto &[u, w] : adj[node]) {
            if (d + w < dist[u]) {
                dist[u] = d + w;
                pq.push({dist[u], u});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
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