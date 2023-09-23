#include <iostream>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

const int MAXN = 1000005;
int n, m, a, b, tmp, res=0;
int ori[MAXN], sum[MAXN];

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        cin >> ori[i];
        sum[i] = sum[i-1] + ori[i];
    }

    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        res = sum[b] - sum[a-1];
        cout << res << "\n";
    }
}
