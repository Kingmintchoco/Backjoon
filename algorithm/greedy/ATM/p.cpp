#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int psum[1004];

int main(){
    freopen("p.txt", "rt", stdin);

    int n, i, p, ans = 0;
    priority_queue <int, vector <int>, greater <int> > pq;
    cin >> n;

    i = n;
    while(i--){
        cin >> p;
        pq.push(p);
    }

    i = 1;
    while(!pq.empty()){
        psum[i] = psum[i - 1] + pq.top();
        ans += psum[i];
        pq.pop(); i++;
    }

    cout << ans << "\n";
}