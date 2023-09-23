#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

struct Node{
    int idx;
    int val;

    Node(int a, int b){
        idx = a;
        val = b;
    }

    bool operator<(const Node &obj) const {
        return val < obj.val;
    }
};

int n, a[1000004];
priority_queue <Node> pq;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        pq.push(Node(i, a[i]));
    }

    while(!pq.empty()){
        Node now = pq.top(); pq.pop();
        int cur = now.idx;
        int cost = now.val;
        cout << cur << ": " << cost << "\n";
    }

}