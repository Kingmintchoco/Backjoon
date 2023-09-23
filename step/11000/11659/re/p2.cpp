#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, a[100004], psum[100004], s, e;

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i];
    }

    for(int i = 0; i < m; ++i){
        cin >> s >> e;
        if(s <= e){
            cout << psum[e] - psum[s - 1] << "\n";
        }else cout << psum[s] - psum[e - 1] << "\n";
    }
}