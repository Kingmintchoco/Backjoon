#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

// 상하좌우
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

bool flag = false;
int n, m, day, a[1004][1004];

void print(){
    cout << "============\n";
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j) cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "============\n";
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> m >> n;

    queue < pair <int, int> > q;     // 익은 토마토의 위치
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            if(a[i][j] == 0) flag = true;
            if(a[i][j] == 1) q.push(make_pair(i, j));
        }
    }

    // 이미 모든 토마토가 익은 토마토일 경우
    if(q.size() == (n*m)){   
        cout << "0\n";
        return 0;
    }

    // 익힐 토마토가 존재하지 않는 경우
    if(!flag){
        cout << "0\n";
        return 0;
    }

    while(1){
        if(q.empty()) break;
        pair <int, int> pos = q.front(); q.pop();

        int y = pos.first;
        int x = pos.second;
        
        for(int i = 0; i < 4; ++i){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny < 0 || nx < 0 || ny >= n || nx >= m || a[ny][nx] == -1) continue;

            if(a[ny][nx] == 0){
                a[ny][nx] = a[y][x] + 1;
                day = a[ny][nx];
                cout << ny << "," << nx << ": " << day << "\n";
                print();
                q.push(make_pair(ny, nx));
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == 0){
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    cout << day - 1 << "\n";
}