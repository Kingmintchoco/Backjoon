#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n;
queue <int> q;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 1; i <= n; ++i) q.push(i);

    while(q.size() != 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << "\n";
}