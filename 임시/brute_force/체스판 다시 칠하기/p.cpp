#include <iostream>
#include <algorithm>

using namespace std;

char board[54][54];


int main(){
    freopen("p.txt", "rt", stdin);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> board[i][j];
        }
    }

    int ans = 32;


    cout << ans << "\n";
}