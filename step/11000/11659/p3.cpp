#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, a, b;
vector <int> v, psum;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    psum.push_back(0);
    for(int i = 0; i < n; ++i){
        int tmp; cin >> tmp;
        v.push_back(tmp);
        psum.push_back(psum[i] + tmp);
    }

    while(m--){
        cin >> a >> b;
        int ans = psum[b] - psum[a - 1];
        cout << ans << "\n";
    }
}