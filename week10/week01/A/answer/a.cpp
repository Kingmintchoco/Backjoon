/* 재귀함수로 풀어보기 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n = 9, r = 7, a[9];

void solve(){
    int sum = 0;
    for(int i = 0; i < r; ++i) sum += a[i];
    if(sum == 100){
        sort(a, a + 7);
        for(int i = 0; i < r; ++i) cout << a[i] << "\n";
        exit(0);    // main 함수 종료
    }
}

// nPr
void makePermutation(int n, int r, int depth){
    if(r == depth){
        solve();
        return;
    }

    for(int i = depth; i < n; ++i){
        swap(a[i], a[depth]);
        makePermutation(n, r, depth + 1);
        swap(a[i], a[depth]);
    }
}

int main(){
    freopen("p.txt", "rt", stdin);

    for(int i = 0; i < n; ++i) cin >> a[i];

    makePermutation(n, r, 0);
}