#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, long long>>> adj(n + 1); // adjacency list
    for (int i = 0; i < m; i++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w}); // graph edges are bidirectional
    }
    vector<long long> dist(n + 1, LLONG_MAX);
    vector<int> parent(n + 1, -1);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    dist[1] = 0;
    q.push({0, 1});
    while (!q.empty()) {
        long long d = q.top().first;
        int u = q.top().second; 
        q.pop();
        if (d > dist[u]) continue;
        for (auto edge : adj[u]) {
            int v = edge.first;
            long long w = edge.second;
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                q.push({dist[v], v});
            }
        }
    }
    if (dist[n] == LLONG_MAX) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> path;
    for (int cur = n; cur != -1; cur = parent[cur]) path.push_back(cur);
    reverse(path.begin(), path.end());
    for (auto node : path) cout << node << " ";
    return 0;
}
