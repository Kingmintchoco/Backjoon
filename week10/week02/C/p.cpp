#include <iostream>
#include <algorithm>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int n, a[104][104], b[104][104], visited[104][104], answer = 1;

void dfs(int y, int x){
    visited[y][x] = 1;

    for(int i = 0; i < 4; ++i){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;

        if(b[ny][nx] == 0 && !visited[ny][nx]) dfs(ny, nx);
    }
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }

    // rain: 비의 높이, val: 안전영역의 개수
    int rain = 0, val = 1;
    while(val > 0){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(b[i][j]) continue;            // 이미 잠긴 구역은 확인할 필요가 없다.
                if(a[i][j] <= rain) b[i][j] = 1; // 건물의 높이가 비의 높이보다 같거나 작으면 잠김
            }
        }

        // vistied만 초기화하는 이유는 b의 경우 비의 잠긴 영역을 나타내는데 rain은 순차적으로 커지므로 이전에 잠긴 영역은 다음 비의 높이에서도 잠겨있다.
        // 그러므로 b는 초기화 할 필요가 없지만 영역의 개수를 세기 위해서 visited는 초기화를 해주어야 한다.
        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);

        val = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(b[i][j] == 0 && !visited[i][j]) {
                    dfs(i, j);
                    val++;
                }
            }
        }

        answer = max(answer, val);
        rain++;
    }

    cout << answer << "\n";
}