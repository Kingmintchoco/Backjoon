#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

// 상하좌우
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int n, m, answer = -2147000000;
int a[10][10], b[10][10], visited[10][10];

void dfs(int y, int x){
    visited[y][x] = 1;

    for(int i = 0; i < 4; ++i){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;

        if(b[ny][nx] == 0 && !visited[ny][nx]){
            b[ny][nx] = 2;
            visited[ny][nx] = 1;
            dfs(ny, nx);
        }
    }
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;

    vector < pair <int, int> > walls;    // 벽을 세울 수 있는 위치
    vector < pair <int, int> > virus;     // 바이러스의 위치
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            if(a[i][j] == 0) walls.push_back(make_pair(i, j));
            if(a[i][j] == 2) virus.push_back(make_pair(i, j));
        }
    }

    vector <int> combi;                 // combination: 조합
    for(int i = 0; i < 3; ++i) combi.push_back(1);
    for(int i = 0; i < walls.size() - 3; ++i) combi.push_back(0);

    sort(walls.begin(), walls.end());
    sort(combi.begin(), combi.end());

    do{
        // init
        fill(&visited[0][0], &visited[0][0] + 10 * 10, 0);
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j) b[i][j] = a[i][j];
        }

        // (1) 임의의 3개의 벽을 세움
        for(int i = 0; i < combi.size(); ++i){
            if(combi[i] == 1) {
                b[walls[i].first][walls[i].second] = 1;
            }
        }

        // (2) virus가 퍼짐
        for(int i = 0; i < virus.size(); ++i){
            dfs(virus[i].first , virus[i].second);
        }

        // (3) 안전영역을 센다
        int count = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(b[i][j] == 0) count++;
            }
        }

        // (4) 갱신
        answer = max(answer, count);
    }while(next_permutation(combi.begin(), combi.end()));

    cout << answer << "\n";
}