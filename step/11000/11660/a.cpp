#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int n, m, x1, y1, x2, y2;
int a[2000][2000], p[2000][2000];

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            // psum
            if(i == 1){
                p[i][j] = p[i][j - 1] + a[i][j];
            }else if(j == 1){
                p[i][j] = p[i - 1][j] + a[i][j];
            }else{
                p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + a[i][j];
            }
        }
    }

    for(int i = 0; i < m; ++i){
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = p[x2][y2] - p[x1 - 1][y2] - p[x2][y1 - 1] + p[x1 - 1][y1 - 1];
        cout << ans << "\n";
    }
}