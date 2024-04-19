#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int n, m, a[104][104], visited[104][104];

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            scanf("%1d", &a[i][j]);
        }
    }

    queue <pair <int, int> > q;

    visited[1][1] = 1;
    q.push(make_pair(1, 1));
    while(!q.empty()){
        pair <int, int> now = q.front(); q.pop();

        int y = now.first;
        int x = now.second;

        for(int i = 0; i < 4; ++i){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny <= 0 || nx <= 0 || ny > n || nx > m) continue;

            if(a[ny][nx] == 1 && !visited[ny][nx]){
                visited[ny][nx] = visited[y][x] + 1;
                q.push(make_pair(ny, nx));
            }
        }
    }

    cout << visited[n][m] << "\n";
}