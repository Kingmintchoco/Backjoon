#include <iostream>
#include <algorithm>
#include <vector>

#define INF 987654321

using namespace std;

int map[101][101];

int main(){
    freopen("p.txt", "rt", stdin);

    int n, m, a, b, c;
    cin >> n >> m;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(i == j) continue;
            else map[i][j] = INF;
        }
    }

    while(m--){
        cin >> a >> b >> c;
        map[a][b] = min(map[a][b], c);
    }

    for(int k = 1; k <= n; ++k){
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
            }
        }
    }

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            if(map[i][j] == INF) cout << "0 ";
            else cout << map[i][j] << " ";
        }
        cout << '\n';
    }
}