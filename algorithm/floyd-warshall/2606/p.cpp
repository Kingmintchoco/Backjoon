#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> adj[101];
int visited[101];

void dfs(int node){
    for(int i = 0; i < adj[node].size(); ++i){
        int next = adj[node][i];
        if(visited[next]) continue;
        visited[next] = 1;
        dfs(next);
    }
}

int main(){
    freopen("p.txt", "rt", stdin);

    int n, m, a, b;
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    visited[1] = 1;
    dfs(1);

    int answer = 0;
    for(int i = 2; i <= n; ++i){
        if(visited[i]) answer++;
    }

    cout << answer << '\n';
}