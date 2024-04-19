#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 

using namespace std;

int n;
char a[70][70];

string dfs(int y, int x, int size){
    if(size == 1) return string(1, a[y][x]);

    char b = a[y][x];
    string ret =  "";
    for(int i = y; i < y + size; ++i){
        for(int j = x; j < x + size; ++j){
            if(b != a[i][j]){
                ret += "(";
                ret += dfs(y, x, size / 2);
                ret += dfs(y, x + size / 2, size / 2);
                ret += dfs(y + size / 2, x, size / 2);
                ret += dfs(y + size / 2, x + size / 2, size / 2);
                ret += ")";
                return ret;
            }
        }
    }

    return string(1, a[y][x]);
}

int main(){
    freopen("p.txt", "rt", stdin);

    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j) cin >> a[i][j];
    }

    string answer = dfs(0, 0, n);
    cout << answer << "\n";
}