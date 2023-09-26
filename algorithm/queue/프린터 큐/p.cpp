#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int t, n, pos, m;

    cin >> t;
    while(t--){
        cin >> n >> pos;

        if(n == 1) {
            cin >> m;
            cout << 1 << "\n";
            continue;
        }

        priority_queue <int> pq;
        queue < pair <int, int> > q;
        for(int i = 0; i < n; ++i){
            cin >> m;
            q.push(make_pair(i, m));
            pq.push(m);
        }

        int ret = 0;
        int cnt = 0;
        while(!q.empty()){
            if(q.front().second < pq.top()){
                q.push(q.front()); q.pop();
            }else{
                cnt++;
                if(q.front().first == pos) ret = cnt;
                q.pop();
                pq.pop();
            }
        }

        cout << ret << "\n";
    }
}