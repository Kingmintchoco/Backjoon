#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}

int main(){
    init();
    freopen("p.txt", "rt", stdin);

    int n, m;
    cin >> n >> m;

    vector <long> s(n, 0);
    vector <long> c(n, 0);
    long ans = 0;

    cin >> s[0];
    for(int i = 1; i < n; ++i){
        int tmp;
        cin >> tmp;
        s[i] = s[i - 1] + tmp;
    }

    for(int i = 0; i < n; ++i){
        int res = s[i] % m;

        if(res == 0) ans++;

        c[res]++;
    }

    for(int i = 0; i < m; ++i){
        if(c[i] > 1){
            ans += (c[i] * c[i] - 1 / 2);
        }
    }

    cout << ans << "\n";
}