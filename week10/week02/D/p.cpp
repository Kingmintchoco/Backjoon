#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int n, m, k, lx, ly, rx, ry, cnt = 0;
int map[104][104], visited[104][104];
vector <int> area;

int dfs(int y, int x){
    int val = 1;

    visited[y][x] = 1;

    for(int i = 0; i < 4; ++i){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= m || nx >= n) continue;

        if(map[ny][nx] == 0 && !visited[ny][nx]) val += dfs(ny, nx);
    }

    return val;
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> m >> n >> k;

    // 사각형 그리기
    while(k--){
        cin >> lx >> ly >> rx >> ry;
        for(int y = ly; y < ry; ++y){
            for(int x = lx; x < rx; ++x) map[y][x] = 1;
        }
    }

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(map[i][j] == 0 && !visited[i][j]){
                cnt++;
                int val = dfs(i, j);
                area.push_back(val);
            }
        }
    }

    sort(area.begin(), area.end());

    cout << cnt << "\n";
    for(auto a : area) cout << a << " ";
    cout << "\n";
}