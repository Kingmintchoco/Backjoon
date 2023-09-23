#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, l, min = 2147000000;
vector <int> v;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> l;
    for(int i = 0; i < n; ++i){
        cin >> m;
        v.push_back(m);
    }

    priority_queue <int, vector <int>, greater<int> > pq;
    for(int i = 0; i < n; ++i){
        for(int j = i; j < (i + 3); ++j) pq.push(v[i]);
        cout << pq.top() << " ";
        while(!pq.empty()) pq.pop();
    }
}