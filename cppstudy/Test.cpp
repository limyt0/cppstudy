#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> topologicalSort(int V, vector<vector<int>>& adj) {
    vector<int> inDegree(V, 0);
    for (int u = 0; u < V; u++)
        for (int v : adj[u])
            inDegree[v]++;

    queue<int> q;
    for (int i = 0; i < V; i++)
        if (inDegree[i] == 0) q.push(i);

    vector<int> result;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        result.push_back(node);
        for (int next : adj[node]) {
            inDegree[next]--;
            if (inDegree[next] == 0) q.push(next);
        }
    }
    return result;
}

int main() {

    int N, M;
    cin >> N >> M;
    vector<vector<int>> vec(N);
    vector<int> inDegree(M, 0);
    for (int i = 0; i < N; i++) vec.push_back(vector<int>());
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
    }
   
    vector<int> order = topologicalSort(M, vec);

    for (int v : order) cout << v << " ";



    
    return 0;
}


