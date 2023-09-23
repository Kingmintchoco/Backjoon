#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, x1, y1, x2, y2, a[2000][2000], psum[2000][2000];

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
            if(i == 1) psum[1][j] = psum[1][j - 1] + a[i][j];
            else if(j == 1) psum[i][1] = psum[i - 1][j] + a[i][j];
            else psum[i][j] = psum[i - 1][j] + psum[i][j - 1] + a[i][j] - psum[i - 1][j - 1];
        }
    }

    while(m--){
        cin >> x1 >> y1 >> x2 >> y2;
        int ans =
            psum[x2][y2] - psum[x2][y1 - 1] - psum[x1 - 1][y2] + psum[x1 - 1][y1 - 1];
        cout << ans << "\n";
    }
}