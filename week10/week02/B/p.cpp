#include <iostream>
#include <algorithm>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int T, n, m, k, x, y;
int map[54][54], visited[54][54];

void dfs(int y, int x){
    visited[y][x] = 1;

    for(int i = 0; i < 4; ++i){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

        if(map[ny][nx] == 1 && !visited[ny][nx]) dfs(ny, nx);
    }
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> T;
    while(T--){
        // map과 vistied 초기화
        fill(&map[0][0], &map[0][0] + 54 * 54, 0);
        fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);

        cin >> m >> n >> k;

        // 배추의 좌표
        while(k--){
            cin >> x >> y;
            map[y][x] = 1;
        }

        int answer = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(map[i][j] == 1 && !visited[i][j]) {
                    answer++;
                    dfs(i, j);
                }
            }
        }

        cout << answer << "\n";
    }
}