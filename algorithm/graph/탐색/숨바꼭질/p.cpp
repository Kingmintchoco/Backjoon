#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int dx[3] = {-1, 1, 2};
int n, k;
int visited[100004];

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n >> k;

    // 둘이 같은 위치에서 소환될 때
    if(n == k){ 
        cout << 0 << "\n";
        return 0;
    }

    queue < pair <int, int> > q;

    visited[n] = 1;
    q.push(make_pair(n, 0));
    while(!q.empty()){
        pair <int, int> cur = q.front(); q.pop();

        int pos = cur.first;
        int cnt = cur.second;

        if(pos == k) {
            cout << cnt << "\n";
            break;
        }

        for(int i = 0; i < 3; ++i){
            int next;

            if(i == 2) next = pos * 2;
            else next = pos + dx[i];

            if(next > 100000 || next < 0) continue;

            if(!visited[next]){
                visited[next] = 1;
                q.push(make_pair(next, cnt + 1));
            }
        }
    }
}