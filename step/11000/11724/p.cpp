#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

vector <int> adj[1004];
int n, m, s, e, cnt=0, visited[1004];

void dfs(int v){
    if(visited[v]) return;

    visited[v] = 1;

    for(int i = 0; i < adj[v].size(); ++i){
        int next = adj[v][i];
        dfs(next);
    }
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 0; i < m; ++i){
        cin >> s >> e;
        // none direction graph
        adj[s].push_back(e);
        adj[e].push_back(s);
    }

    for(int i = 1; i <= n; ++i) sort(adj[i].begin(), adj[i].end());

    for(int i = 1; i <= n; ++i){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << "\n";
}