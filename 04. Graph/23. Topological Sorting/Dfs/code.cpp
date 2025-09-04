#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>>& adj, vector<int>& visited, stack<int>& st) {
    visited[u] = 1;
    cout<<"loop start = "<<u<<endl;
    for (auto v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited, st);
        }
    }
    cout<<"loop end = "<<u<<endl;
    st.push(u);
}

vector<int> topoSortDFS(int n, vector<vector<int>>& adj) {
    vector<int> visited(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) dfs(i, adj, visited, st);
    }

    vector<int> topo;
    while (!st.empty()) {

        cout<<"topo = "<< st.top()<<endl;
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}

int main() {
    int n = 6; // number of nodes
    vector<vector<int>> adj(n);

    // Example DAG edges
    adj[5] = {2, 0};
    adj[4] = {0};
    adj[2] = {3};
    adj[3] = {1};
    adj[1] = {4};

    vector<int> result = topoSortDFS(n, adj);

    cout << "Topological Order (DFS): ";
    for (int v : result) cout << v << " "; //Topological Order (DFS): 5 4 2 3 1 0 
    cout << "\n";
}
