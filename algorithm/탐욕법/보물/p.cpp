#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(){
    freopen("p.txt", "rt", stdin);

    int n, a_, b_, ans = 0;
    vector <int> b;
    priority_queue < int, vector <int>, greater <int> > pq;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a_;
        pq.push(a_);
    }

    for(int i = 0; i < n; ++i){
        cin >> b_;
        b.push_back(b_);
    }

    sort(b.begin(), b.end(), greater <int>());

    for(int i = 0; i < b.size(); ++i){
        ans += (pq.top() * b[i]);
        pq.pop();
    }

    cout << ans << "\n";
}