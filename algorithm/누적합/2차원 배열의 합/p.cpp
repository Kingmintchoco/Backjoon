#include <iostream>
#include <algorithm>

using namespace std;

int arr[304][304], psum[304][304];

int main(){
    freopen("p.txt", "rt", stdin);

    int n, m, k, i, j, x, y;
    cin >> n >> m;
    for(i = 1; i <= n; ++i){
        for(j = 1; j <= m; ++j){
            cin >> arr[i][j];
            psum[i][j] = arr[i][j] + psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1];
        }
    }

    cin >> k;
    while(k--){
        cin >> i >> j >> x >> y;

        if(i == x && j == y) cout << arr[i][j] << "\n";
        else{
            int result = psum[x][y] - psum[x][j - 1] - psum[i - 1][y] + psum[i - 1][j - 1];
            cout << result << "\n";
        }
    }
}  